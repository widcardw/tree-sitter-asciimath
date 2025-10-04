import XCTest
import SwiftTreeSitter
import TreeSitterAsciimath

final class TreeSitterAsciimathTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_asciimath())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading AsciiMath grammar")
    }
}
