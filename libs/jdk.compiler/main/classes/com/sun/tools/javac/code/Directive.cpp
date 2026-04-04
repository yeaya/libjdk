#include <com/sun/tools/javac/code/Directive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Directive::init$() {
}

Directive::Directive() {
}

$Class* Directive::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Directive, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Directive$UsesDirective", "com.sun.tools.javac.code.Directive", "UsesDirective", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Directive$RequiresDirective", "com.sun.tools.javac.code.Directive", "RequiresDirective", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Directive$ProvidesDirective", "com.sun.tools.javac.code.Directive", "ProvidesDirective", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Directive$OpensDirective", "com.sun.tools.javac.code.Directive", "OpensDirective", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Directive$OpensFlag", "com.sun.tools.javac.code.Directive", "OpensFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.code.Directive$ExportsDirective", "com.sun.tools.javac.code.Directive", "ExportsDirective", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Directive$ExportsFlag", "com.sun.tools.javac.code.Directive", "ExportsFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.code.Directive$RequiresFlag", "com.sun.tools.javac.code.Directive", "RequiresFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.code.Directive",
		"java.lang.Object",
		"javax.lang.model.element.ModuleElement$Directive",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Directive$UsesDirective,com.sun.tools.javac.code.Directive$RequiresDirective,com.sun.tools.javac.code.Directive$ProvidesDirective,com.sun.tools.javac.code.Directive$OpensDirective,com.sun.tools.javac.code.Directive$OpensFlag,com.sun.tools.javac.code.Directive$ExportsDirective,com.sun.tools.javac.code.Directive$ExportsFlag,com.sun.tools.javac.code.Directive$RequiresFlag"
	};
	$loadClass(Directive, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Directive);
	});
	return class$;
}

$Class* Directive::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com