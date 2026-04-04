#include <com/sun/org/apache/xpath/internal/compiler/PsuedoNames.h>
#include <jcpp.h>

#undef PSEUDONAME_ANY
#undef PSEUDONAME_COMMENT
#undef PSEUDONAME_OTHER
#undef PSEUDONAME_PI
#undef PSEUDONAME_ROOT
#undef PSEUDONAME_TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$String* PsuedoNames::PSEUDONAME_ANY = nullptr;
$String* PsuedoNames::PSEUDONAME_ROOT = nullptr;
$String* PsuedoNames::PSEUDONAME_TEXT = nullptr;
$String* PsuedoNames::PSEUDONAME_COMMENT = nullptr;
$String* PsuedoNames::PSEUDONAME_PI = nullptr;
$String* PsuedoNames::PSEUDONAME_OTHER = nullptr;

void PsuedoNames::init$() {
}

PsuedoNames::PsuedoNames() {
}

void PsuedoNames::clinit$($Class* clazz) {
	$assignStatic(PsuedoNames::PSEUDONAME_ANY, "*"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_ROOT, "/"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_TEXT, "#text"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_COMMENT, "#comment"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_PI, "#pi"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_OTHER, "*"_s);
}

$Class* PsuedoNames::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PSEUDONAME_ANY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_ANY)},
		{"PSEUDONAME_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_ROOT)},
		{"PSEUDONAME_TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_TEXT)},
		{"PSEUDONAME_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_COMMENT)},
		{"PSEUDONAME_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_PI)},
		{"PSEUDONAME_OTHER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_OTHER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PsuedoNames, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.compiler.PsuedoNames",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PsuedoNames, name, initialize, &classInfo$$, PsuedoNames::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PsuedoNames);
	});
	return class$;
}

$Class* PsuedoNames::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com