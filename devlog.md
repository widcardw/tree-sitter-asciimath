# Dev Log (纯吐槽)

## 2025.12.28

想尝试加上浏览器上 WASM 的支持，看到 [NPM](https://www.npmjs.com/package/web-tree-sitter) 的教程可兴奋了，觉得将 `bindings/rust/to_latex.rs` 用 WASM 导出之后，以下面的 Pipeline 似乎是非常合理的

```js
// 1. 加载 tree-sitter 语法
import { Language } from 'web-tree-sitter';
const AmLang = await Language.load('/path/to/tree-sitter-asciimath.wasm');
parser.setLanguage(AmLang);
// 2. 创建 AsciiMathToLatex 对象
const { instance } = await WebAssembly.instantiateStreaming(fetch('/asciimath-to-latex.wasm'))
const amInst = instance.exports.AsciiMathToLatex()
// 3. 进行转换
const i = 'x^2'
const tree = parser.parse(i)
const output = amInst.to_latex(tree.rootNode)
// x^{2}                       ^^^^^^^^^^^^^
```

然而并没有想象中那么简单，在 vibe 的过程中 AI 说 tree-sitter 的核心是 C 代码，不能通过这种方式直接编译到 WASM，再让它继续写就会从头开始创建一个跟 `to_latex.rs` 功能完全一样的文件，这就背离了当时想要的 *只改 `to_latex.rs` 就可对所有平台生效* 的初衷。

### 实现过程及中间的问题

需要安装 `emcc`，可自行搜索，然后使用 `tree-sitter build --wasm` 即可将 tree-sitter 的语法打包到 wasm 文件。这个过程有点慢。

WASM 相关的知识可参考 MDN 文档，需要安装 `wasm-pack` 等等，然后用 `wasm-bindgen` 之类的来导出。在这个步骤遇到的问题就是，`AsciiMathToLatex` 这个 struct 用到了 tree-sitter 里面的类型，还没想好他能不能直接编译。
