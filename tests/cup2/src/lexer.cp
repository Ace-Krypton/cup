enum TokenKind (
    Unset,
    Empty,
    Ident,
    StringLit,
    CharLit,
    IntLit,
    FloatLit,
    True,
    False,
    This,
    Type,

    Tag,
    Mod,
    Use,
    Comp,
    Enum,
    Prop,
    Def,
    Sub,
    Var,
    New,

    If,
    Elif,
    Else,
    Loop,
    While,
    For,
    Each,
    In,
    Match,
    Ret,
    Next,
    Jump,
    Try,
    As,
    Has,

    Semicolon,
    Colon,
    Comma,
    Dot,
    QuestionMark,
    Tilde,
    Hash,
    LeftParen,
    RightParen,
    LeftBrace,
    RightBrace,
    LeftBracket,
    RightBracket,

    Deref,
    Address,
    Assign,
    Equal,
    Not,
    NotEqual,
    And,
    Or,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
    Add,
    AddAssign,
    Subtract,
    SubtractAssign,
    Multiply,
    MultiplyAssign,
    Divide,
    DivideAssign,
    Modulo,
    ModuloAssign,
);

int get_token_length(TokenKind kind) {
    match kind {
        TokenKind:False,
        TokenKind:While,
        TokenKind:Match {
            ret 5;
        },
        TokenKind:True,
        TokenKind:This,
        TokenKind:Type,
        TokenKind:Comp,
        TokenKind:Enum,
        TokenKind:Prop,
        TokenKind:Elif,
        TokenKind:Else,
        TokenKind:Loop,
        TokenKind:Each,
        TokenKind:Next,
        TokenKind:Jump {
            ret 4;
        },
        TokenKind:Tag,
        TokenKind:Mod,
        TokenKind:Use,
        TokenKind:Def,
        TokenKind:Sub,
        TokenKind:Var,
        TokenKind:New,
        TokenKind:For,
        TokenKind:Ret,
        TokenKind:Try,
        TokenKind:Has {
            ret 3;
        },
        TokenKind:If,
        TokenKind:In,
        TokenKind:As,
        TokenKind:Equal,
        TokenKind:NotEqual,
        TokenKind:LessEqual,
        TokenKind:GreaterEqual,
        TokenKind:AddAssign,
        TokenKind:SubtractAssign,
        TokenKind:MultiplyAssign,
        TokenKind:DivideAssign,
        TokenKind:ModuloAssign {
            ret 2;
        },
        TokenKind:Semicolon,
        TokenKind:Colon,
        TokenKind:Comma,
        TokenKind:Dot,
        TokenKind:QuestionMark,
        TokenKind:Tilde,
        TokenKind:Hash,
        TokenKind:LeftParen,
        TokenKind:RightParen,
        TokenKind:LeftBrace,
        TokenKind:RightBrace,
        TokenKind:LeftBracket,
        TokenKind:RightBracket,
        TokenKind:Deref,
        TokenKind:Address,
        TokenKind:Assign,
        TokenKind:Not,
        TokenKind:And,
        TokenKind:Or,
        TokenKind:Less,
        TokenKind:Greater,
        TokenKind:Add,
        TokenKind:Subtract,
        TokenKind:Multiply,
        TokenKind:Divide,
        TokenKind:Modulo {
            ret 1;
        },
    };
};

ptr<u8> get_token_name(TokenKind kind) {
    match kind {
        TokenKind:Empty { ret "EMPTY"; },
        TokenKind:Ident { ret "IDENT"; },
        TokenKind:StringLit { ret "STRING_LIT"; },
        TokenKind:CharLit { ret "CHAR_LIT"; },
        TokenKind:IntLit { ret "INT_LIT"; },
        TokenKind:FloatLit { ret "FLOAT_LIT"; },
        TokenKind:True { ret "TRUE"; },
        TokenKind:False { ret "FALSE"; },
        TokenKind:This { ret "THIS"; },
        TokenKind:Type { ret "TYPE"; },
        TokenKind:Tag { ret "TAG"; },
        TokenKind:Mod { ret "MOD"; },
        TokenKind:Use { ret "USE"; },
        TokenKind:Comp { ret "COMP"; },
        TokenKind:Enum { ret "ENUM"; },
        TokenKind:Prop { ret "PROP"; },
        TokenKind:Def { ret "DEF"; },
        TokenKind:Sub { ret "SUB"; },
        TokenKind:Var { ret "VAR"; },
        TokenKind:New { ret "NEW"; },
        TokenKind:If { ret "IF"; },
        TokenKind:Elif { ret "ELIF"; },
        TokenKind:Else { ret "ELSE"; },
        TokenKind:Loop { ret "LOOP"; },
        TokenKind:While { ret "WHILE"; },
        TokenKind:For { ret "FOR"; },
        TokenKind:Each { ret "EACH"; },
        TokenKind:In { ret "IN"; },
        TokenKind:Match { ret "MATCH"; },
        TokenKind:Ret { ret "RET"; },
        TokenKind:Next { ret "NEXT"; },
        TokenKind:Jump { ret "JUMP"; },
        TokenKind:Try { ret "TRY"; },
        TokenKind:As { ret "AS"; },
        TokenKind:Has { ret "HAS"; },
        TokenKind:Semicolon { ret "SEMICOLON"; },
        TokenKind:Colon { ret "COLON"; },
        TokenKind:Comma { ret "COMMA"; },
        TokenKind:Dot { ret "DOT"; },
        TokenKind:QuestionMark { ret "QUESTION_MARK"; },
        TokenKind:Tilde { ret "TILDE"; },
        TokenKind:Hash { ret "HASH"; },
        TokenKind:LeftParen { ret "LEFT_PAREN"; },
        TokenKind:RightParen { ret "RIGHT_PAREN"; },
        TokenKind:LeftBrace { ret "LEFT_BRACE"; },
        TokenKind:RightBrace { ret "RIGHT_BRACE"; },
        TokenKind:LeftBracket { ret "LEFT_BRACKET"; },
        TokenKind:RightBracket { ret "RIGHT_BRACKET"; },
        TokenKind:Deref { ret "DEREF"; },
        TokenKind:Address { ret "ADDRESS"; },
        TokenKind:Assign { ret "ASSIGN"; },
        TokenKind:Equal { ret "EQUAL"; },
        TokenKind:Not { ret "NOT"; },
        TokenKind:NotEqual { ret "NOT_EQUAL"; },
        TokenKind:And { ret "AND"; },
        TokenKind:Or { ret "OR"; },
        TokenKind:Less { ret "LESS"; },
        TokenKind:LessEqual { ret "LESS_EQUAL"; },
        TokenKind:Greater { ret "GREATER"; },
        TokenKind:GreaterEqual { ret "GREATER_EQUAL"; },
        TokenKind:Add { ret "ADD"; },
        TokenKind:AddAssign { ret "ADD_ASSIGN"; },
        TokenKind:Subtract { ret "SUBTRACT"; },
        TokenKind:SubtractAssign { ret "SUBTRACT_ASSIGN"; },
        TokenKind:Multiply { ret "MULTIPLY"; },
        TokenKind:MultiplyAssign { ret "MULTIPLY_ASSIGN"; },
        TokenKind:Divide { ret "DIVIDE"; },
        TokenKind:DivideAssign { ret "DIVIDE_ASSIGN"; },
        TokenKind:Modulo { ret "MODULO"; },
        TokenKind:ModuloAssign { ret "MODULO_ASSIGN"; },
    };
};

comp Token (
    TokenKind kind,
    int index,
    ptr<u8> value,
);

sub add_to_value(File file, ptr<vec<u8>> value, int i, u8 c, u8 is_literal) {
    if (is_literal == 2) & (value@.len == 4) {
        file.throw(i, "too many characters in character literal");
    };
    vec<u8>:push(value, c);
    value@[value@.len] = '\0';
};

TokenKind get_keyword(ptr<u8> value) {
    if cstr:cmp(value, "tag") == 0 {
        ret TokenKind:Tag;
    } elif cstr:cmp(value, "mod") == 0 {
        ret TokenKind:Mod;
    } elif cstr:cmp(value, "use") == 0 {
        ret TokenKind:Use;
    } elif cstr:cmp(value, "comp") == 0 {
        ret TokenKind:Comp;
    } elif cstr:cmp(value, "enum") == 0 {
        ret TokenKind:Enum;
    } elif cstr:cmp(value, "prop") == 0 {
        ret TokenKind:Prop;
    } elif cstr:cmp(value, "def") == 0 {
        ret TokenKind:Def;
    } elif cstr:cmp(value, "sub") == 0 {
        ret TokenKind:Sub;
    } elif cstr:cmp(value, "var") == 0 {
        ret TokenKind:Var;
    } elif cstr:cmp(value, "this") == 0 {
        ret TokenKind:This;
    } elif cstr:cmp(value, "type") == 0 {
        ret TokenKind:Type;
    } elif cstr:cmp(value, "new") == 0 {
        ret TokenKind:New;
    } elif cstr:cmp(value, "true") == 0 {
        ret TokenKind:True;
    } elif cstr:cmp(value, "false") == 0 {
        ret TokenKind:False;
    } elif cstr:cmp(value, "if") == 0 {
        ret TokenKind:If;
    } elif cstr:cmp(value, "elif") == 0 {
        ret TokenKind:Elif;
    } elif cstr:cmp(value, "else") == 0 {
        ret TokenKind:Else;
    } elif cstr:cmp(value, "loop") == 0 {
        ret TokenKind:Loop;
    } elif cstr:cmp(value, "while") == 0 {
        ret TokenKind:While;
    } elif cstr:cmp(value, "for") == 0 {
        ret TokenKind:For;
    } elif cstr:cmp(value, "each") == 0 {
        ret TokenKind:Each;
    } elif cstr:cmp(value, "in") == 0 {
        ret TokenKind:In;
    } elif cstr:cmp(value, "match") == 0 {
        ret TokenKind:Match;
    } elif cstr:cmp(value, "ret") == 0 {
        ret TokenKind:Ret;
    } elif cstr:cmp(value, "next") == 0 {
        ret TokenKind:Next;
    } elif cstr:cmp(value, "jump") == 0 {
        ret TokenKind:Jump;
    } elif cstr:cmp(value, "try") == 0 {
        ret TokenKind:Try;
    } elif cstr:cmp(value, "as") == 0 {
        ret TokenKind:As;
    } elif cstr:cmp(value, "has") == 0 {
        ret TokenKind:Has;
    };
    ret TokenKind:Empty;
}; 

bool is_binary_operator(TokenKind kind) {
    match kind {
        TokenKind:LeftParen,
        TokenKind:Assign,
        TokenKind:Equal,
        TokenKind:NotEqual,
        TokenKind:And,
        TokenKind:Or,
        TokenKind:Less,
        TokenKind:LessEqual,
        TokenKind:Greater,
        TokenKind:GreaterEqual,
        TokenKind:Add,
        TokenKind:AddAssign,
        TokenKind:Subtract,
        TokenKind:SubtractAssign,
        TokenKind:Multiply,
        TokenKind:MultiplyAssign,
        TokenKind:Divide,
        TokenKind:DivideAssign,
        TokenKind:Modulo,
        TokenKind:ModuloAssign,
        TokenKind:As,
        TokenKind:Has {
            ret true;
        },
        _ {
            ret false;
        },
    };
};

` check
vec<Token> lex(File file) {
    vec<Token> tokens = vec<Token>:new_with_cap(32);
    u8 is_comment = 0;
    u8 is_literal = 0;
    vec<u8> value = vec<u8>:new_with_cap(8);
    value[value.len] = '\0';

    ~l for i = 0, i <= file.data.len, i += 1 {
        u8 c = file.data[i];

        if ((((is_literal != 1) & (is_literal != 2)) & (is_literal != 3)) & (is_literal != 4)) & (c == '`') {
            is_comment = 1;
            next ~l;
        };

        if is_comment != 0 {
            if c == '\n' {
                is_comment = 0;
            };
            next ~l;
        };

        TokenKind kind = TokenKind:Unset;

        if (is_literal == 3) | (is_literal == 4) {
            is_literal -= 2;
        };

        if (is_literal == 1) | (is_literal == 2) {
            if c == 0 {
                if is_literal == 1 {
                    file.throw(i - 1, "expected end of string literal");
                } else {
                    file.throw(i - 1, "expected end of char literal");
                };
            }
            elif (is_literal == 1) & (c == '"') {}
            elif (is_literal == 2) & (c == 39) {}
            else {
                add_to_value(file, value$, i, c, is_literal);
                next ~l;
            };
        };

        ~ll if (c == 0) | char:is_space(c) {
            kind = TokenKind:Empty;
        } else {
            if c == '"' {
                if is_literal == 1 {
                    kind = TokenKind:StringLit;
                    is_literal = 0;
                } else {
                    kind = TokenKind:Empty;
                    is_literal = 3;
                };
            } elif c == 39 {
                if is_literal == 2 {
                    kind = TokenKind:CharLit;
                    is_literal = 0;
                } else {
                    kind = TokenKind:Empty;
                    is_literal = 4;
                };
            } elif c == ';' {
                kind = TokenKind:Semicolon;
            } elif c == ':' {
                kind = TokenKind:Colon;
            } elif c == ',' {
                kind = TokenKind:Comma;
            } elif c == '.' {
                u8 n = file.data[i + 1];
                if (is_literal != 5) | ((n == '_') | char:is_alpha(n)) {
                    kind = TokenKind:Dot;
                };
            } elif c == '?' {
                kind = TokenKind:QuestionMark;
            } elif c == '~' {
                kind = TokenKind:Tilde;
            } elif c == '#' {
                kind = TokenKind:Hash;
            } elif c == '(' {
                kind = TokenKind:LeftParen;
            } elif c == ')' {
                kind = TokenKind:RightParen;
            } elif c == '{' {
                kind = TokenKind:LeftBrace;
            } elif c == '}' {
                kind = TokenKind:RightBrace;
            } elif c == '[' {
                kind = TokenKind:LeftBracket;
            } elif c == ']' {
                kind = TokenKind:RightBracket;
            } elif c == '@' {
                kind = TokenKind:Deref;
            } elif c == '$' {
                kind = TokenKind:Address;
            } elif c == '&' {
                kind = TokenKind:And;
            } elif c == '|' {
                kind = TokenKind:Or;
            } elif c == '=' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:Equal;
                    i += 1;
                } else {
                    kind = TokenKind:Assign;
                };
            } elif c == '!' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:NotEqual;
                    i += 1;
                } else {
                    kind = TokenKind:Not;
                };
            } elif c == '<' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:LessEqual;
                    i += 1;
                } else {
                    kind = TokenKind:Less;
                };
            } elif c == '>' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:GreaterEqual;
                    i += 1;
                } else {
                    kind = TokenKind:Greater;
                };
            } elif c == '+' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:AddAssign;
                    i += 1;
                } else {
                    kind = TokenKind:Add;
                };
            } elif c == '-' {
                if is_binary_operator(tokens[tokens.len - 1].kind) & char:is_num(file.data[i + 1]) {
                    ret ~ll;
                };
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:SubtractAssign;
                    i += 1;
                } else {
                    kind = TokenKind:Subtract;
                };
            } elif c == '*' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:MultiplyAssign;
                    i += 1;
                } else {
                    kind = TokenKind:Multiply;
                };
            } elif c == '/' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:DivideAssign;
                    i += 1;
                } else {
                    kind = TokenKind:Divide;
                };
            } elif c == '%' {
                if (i + 1 < file.data.len) & (file.data[i + 1] == '=') {
                    kind = TokenKind:ModuloAssign;
                    i += 1;
                } else {
                    kind = TokenKind:Modulo;
                };
            };
        };

        match kind {
            TokenKind:Unset {
                if ((((c == '-') | (c == '_')) | (c == '.')) | (c == ':')) | char:is_alpha_num(c) {
                    if ((value.len == 0) & char:is_num(c)) | (c == '-') {
                        is_literal = 5;
                    } elif (is_literal == 5) | (is_literal == 6) {
                        if (c == '.') & (is_literal == 5) {
                            is_literal = 6;
                        } elif (c == '_') | char:is_num(c) {} 
                        else {
                            file.throw(i - value.len, "invalid identifier name starting with a digit");
                        };
                    };

                    if ((is_literal != 5) & (is_literal != 6)) | (c != '_') {
                        add_to_value(file, value$, i, c, is_literal);
                    };
                } else {
                    file.throw(i, "unexpected symbol %c", c);
                };
            },
            _ {
                if value.len > 0 {
                    match kind {
                        TokenKind:StringLit {},
                        TokenKind:CharLit {},
                        _ {
                            TokenKind value_kind = get_keyword(value.buf);

                            match value_kind {
                                TokenKind:Empty {
                                    Token token;
                                    if is_literal == 5 {
                                        token.kind = TokenKind:IntLit;
                                    } elif is_literal == 6 {
                                        token.kind = TokenKind:FloatLit;
                                        if value[value.len - 1] == '.' {
                                            file.throw(i - 1, "expected a value after the decimal point");
                                        };
                                    } else {
                                        token.kind = TokenKind:Ident;
                                    };
                                    token.index = i - value.len;
                                    token.value = value.buf;
                                    tokens.push(token);
                                },
                                _ {
                                    Token token = new Token {
                                        kind = value_kind,
                                        index = i - get_token_length(value_kind),
                                    };
                                    tokens.push(token);
                                },
                            };

                            value = vec<u8>:new_with_cap(8);
                            value[value.len] = '\0';
                            is_literal = 0;
                        },
                    };
                };

                match kind {
                    TokenKind:Empty {},
                    _ {
                        Token token = new Token {
                            kind = kind,
                        };
                        match kind {
                            TokenKind:StringLit {
                                token.value = value.buf;
                                token.index = i - value.len;
                                value = vec<u8>:new_with_cap(8);
                                value[value.len] = '\0';
                            },
                            TokenKind:CharLit {
                                token.value = value.buf;
                                token.index = i - value.len;
                                value = vec<u8>:new_with_cap(8);
                                value[value.len] = '\0';
                            },
                            _ {
                                token.index = i - get_token_length(kind) + 1;
                            },
                        };
                        tokens.push(token);
                    },
                };
            },
        };
    };

    Token last;
    if tokens.len > 0 {
        last = tokens[tokens.len - 1];
        match last.kind {
            TokenKind:Ident {
                last.index = last.index + cstr:len(last.value);
            },
            _ {
                last.index = last.index + get_token_length(last.kind);
            },
        };
    } else {
        last.index = 0;
    };
    last.kind = TokenKind:Empty;
    tokens.push(last);

    ret tokens;
};

sub print_tokens(vec<Token> tokens) {
    fmt:print("Tokens:\n");
    for i = 0, (i) < tokens.len, i += 1 {
        TokenKind kind = tokens[i].kind;
        color:set(Color:Magenta);
        fmt:print("  %s", get_token_name(kind));
        color:reset();
        match kind {
            TokenKind:Ident,
            TokenKind:StringLit,
            TokenKind:CharLit,
            TokenKind:IntLit,
            TokenKind:FloatLit {
                fmt:print("(%s)", tokens[i].value);
            },
        };
        fmt:print("\n");
    };
    fmt:print("\n");
};