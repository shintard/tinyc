// AST node types
enum {
	AST_ADD, // '+'
	AST_SUBSTRACT, // '-'
	AST_MULTIPLY, // '*'
	AST_DIVIDE, // '/'
	AST_INTLIT // interger literal
};

// Abstract Syntax Tree structure
// op値A_INTLITを持つASTノードは整数値を表す
// これはサブツリーの子を持たず、intvalueフィールドに値を持つだけ
// 左と右のツリー. 後で、子木の値を加算したり減算したりするために右と左で分ける
struct ASTnode {
	int op; // ツリーに対して行う操作
	struct ASTnode *left;
	struct ASTnode *right;
	int intvalue; // AST_INTLITの場合の整数値
};