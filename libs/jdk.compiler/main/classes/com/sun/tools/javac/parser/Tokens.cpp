#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DUMMY
#undef ERROR
#undef IDENTIFIER

using $Tokens$TokenKindArray = $Array<::com::sun::tools::javac::parser::Tokens$TokenKind>;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$Context$Key* Tokens::tokensKey = nullptr;
$Tokens$Token* Tokens::DUMMY = nullptr;

Tokens* Tokens::instance($Context* context) {
	$init(Tokens);
	$var(Tokens, instance, $cast(Tokens, $nc(context)->get(Tokens::tokensKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Tokens, context));
	}
	return instance;
}

void Tokens::init$($Context* context) {
	$set(this, keywords, $new($HashMap));
	$nc(context)->put(Tokens::tokensKey, this);
	$set(this, names, $Names::instance(context));
	{
		$var($Tokens$TokenKindArray, arr$, $Tokens$TokenKind::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Tokens$TokenKind* t = arr$->get(i$);
			if ($nc(t)->name$ != nullptr) {
				$nc(this->names)->fromString(t->name$);
				$nc(this->keywords)->put(t->name$, t);
			}
		}
	}
}

$Tokens$TokenKind* Tokens::lookupKind($Name* name) {
	$Tokens$TokenKind* t = $cast($Tokens$TokenKind, $nc(this->keywords)->get($($nc(name)->toString())));
	$init($Tokens$TokenKind);
	return (t != nullptr) ? t : $Tokens$TokenKind::IDENTIFIER;
}

$Tokens$TokenKind* Tokens::lookupKind($String* name) {
	$Tokens$TokenKind* t = $cast($Tokens$TokenKind, $nc(this->keywords)->get(name));
	$init($Tokens$TokenKind);
	return (t != nullptr) ? t : $Tokens$TokenKind::IDENTIFIER;
}

void Tokens::clinit$($Class* clazz) {
	$assignStatic(Tokens::tokensKey, $new($Context$Key));
	$init($Tokens$TokenKind);
	$assignStatic(Tokens::DUMMY, $new($Tokens$Token, $Tokens$TokenKind::ERROR, 0, 0, nullptr));
}

Tokens::Tokens() {
}

$Class* Tokens::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(Tokens, names)},
		{"keywords", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/parser/Tokens$TokenKind;>;", $PRIVATE, $field(Tokens, keywords)},
		{"tokensKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/parser/Tokens;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Tokens, tokensKey)},
		{"DUMMY", "Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Tokens, DUMMY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Tokens, init$, void, $Context*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/parser/Tokens;", nullptr, $PUBLIC | $STATIC, $staticMethod(Tokens, instance, Tokens*, $Context*)},
		{"lookupKind", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, 0, $virtualMethod(Tokens, lookupKind, $Tokens$TokenKind*, $Name*)},
		{"lookupKind", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/Tokens$TokenKind;", nullptr, 0, $virtualMethod(Tokens, lookupKind, $Tokens$TokenKind*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.Tokens$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.tools.javac.parser.Tokens$NumericToken", "com.sun.tools.javac.parser.Tokens", "NumericToken", $STATIC | $FINAL},
		{"com.sun.tools.javac.parser.Tokens$StringToken", "com.sun.tools.javac.parser.Tokens", "StringToken", $STATIC},
		{"com.sun.tools.javac.parser.Tokens$NamedToken", "com.sun.tools.javac.parser.Tokens", "NamedToken", $STATIC | $FINAL},
		{"com.sun.tools.javac.parser.Tokens$Token", "com.sun.tools.javac.parser.Tokens", "Token", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.parser.Tokens$TokenKind", "com.sun.tools.javac.parser.Tokens", "TokenKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.parser.Tokens",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.Tokens$1,com.sun.tools.javac.parser.Tokens$NumericToken,com.sun.tools.javac.parser.Tokens$StringToken,com.sun.tools.javac.parser.Tokens$NamedToken,com.sun.tools.javac.parser.Tokens$Token,com.sun.tools.javac.parser.Tokens$Token$Tag,com.sun.tools.javac.parser.Tokens$Comment,com.sun.tools.javac.parser.Tokens$Comment$CommentStyle,com.sun.tools.javac.parser.Tokens$TokenKind"
	};
	$loadClass(Tokens, name, initialize, &classInfo$$, Tokens::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Tokens);
	});
	return class$;
}

$Class* Tokens::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com