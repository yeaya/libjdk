#include <com/sun/tools/javac/launcher/Main$Fault.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::launcher::Main;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$Fault::init$($Main* this$0, $JCDiagnostic$Error* error) {
	$set(this, this$0, this$0);
	$Exception::init$($(this$0->getMessage(error)));
}

Main$Fault::Main$Fault() {
}

Main$Fault::Main$Fault(const Main$Fault& e) : $Exception(e) {
}

void Main$Fault::throw$() {
	throw *this;
}

$Class* Main$Fault::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/launcher/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Fault, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main$Fault, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/launcher/Main;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, 0, $method(Main$Fault, init$, void, $Main*, $JCDiagnostic$Error*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$Fault", "com.sun.tools.javac.launcher.Main", "Fault", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$Fault",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$Fault, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$Fault);
	});
	return class$;
}

$Class* Main$Fault::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com