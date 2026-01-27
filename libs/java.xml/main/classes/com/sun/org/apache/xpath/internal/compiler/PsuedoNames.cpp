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

$FieldInfo _PsuedoNames_FieldInfo_[] = {
	{"PSEUDONAME_ANY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_ANY)},
	{"PSEUDONAME_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_ROOT)},
	{"PSEUDONAME_TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_TEXT)},
	{"PSEUDONAME_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_COMMENT)},
	{"PSEUDONAME_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_PI)},
	{"PSEUDONAME_OTHER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PsuedoNames, PSEUDONAME_OTHER)},
	{}
};

$MethodInfo _PsuedoNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PsuedoNames, init$, void)},
	{}
};

$ClassInfo _PsuedoNames_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.PsuedoNames",
	"java.lang.Object",
	nullptr,
	_PsuedoNames_FieldInfo_,
	_PsuedoNames_MethodInfo_
};

$Object* allocate$PsuedoNames($Class* clazz) {
	return $of($alloc(PsuedoNames));
}

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

void clinit$PsuedoNames($Class* class$) {
	$assignStatic(PsuedoNames::PSEUDONAME_ANY, "*"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_ROOT, "/"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_TEXT, "#text"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_COMMENT, "#comment"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_PI, "#pi"_s);
	$assignStatic(PsuedoNames::PSEUDONAME_OTHER, "*"_s);
}

$Class* PsuedoNames::load$($String* name, bool initialize) {
	$loadClass(PsuedoNames, name, initialize, &_PsuedoNames_ClassInfo_, clinit$PsuedoNames, allocate$PsuedoNames);
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