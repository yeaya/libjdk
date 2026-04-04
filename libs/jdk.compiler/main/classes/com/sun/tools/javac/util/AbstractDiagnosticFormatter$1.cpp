#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$1.h>
#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Printer = ::com::sun::tools::javac::code::Printer;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $AbstractDiagnosticFormatter = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void AbstractDiagnosticFormatter$1::init$($AbstractDiagnosticFormatter* this$0) {
	$set(this, this$0, this$0);
	$Printer::init$();
}

$String* AbstractDiagnosticFormatter$1::localize($Locale* locale, $String* key, $ObjectArray* args) {
	return this->this$0->localize(locale, key, args);
}

$String* AbstractDiagnosticFormatter$1::capturedVarId($Type$CapturedType* t, $Locale* locale) {
	return $str({""_s, $$str(($nc(this->this$0->allCaptured)->indexOf(t) + 1))});
}

$String* AbstractDiagnosticFormatter$1::visitCapturedType($Type$CapturedType* t, $Locale* locale) {
	if (!$nc(this->this$0->allCaptured)->contains(t)) {
		$set(this->this$0, allCaptured, $nc(this->this$0->allCaptured)->append(t));
	}
	return $Printer::visitCapturedType(t, locale);
}

$Object* AbstractDiagnosticFormatter$1::visitCapturedType($Type$CapturedType* t, Object$* locale) {
	return $of(this->visitCapturedType(t, $cast($Locale, locale)));
}

AbstractDiagnosticFormatter$1::AbstractDiagnosticFormatter$1() {
}

$Class* AbstractDiagnosticFormatter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDiagnosticFormatter$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter;)V", nullptr, 0, $method(AbstractDiagnosticFormatter$1, init$, void, $AbstractDiagnosticFormatter*)},
		{"capturedVarId", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AbstractDiagnosticFormatter$1, capturedVarId, $String*, $Type$CapturedType*, $Locale*)},
		{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT, $virtualMethod(AbstractDiagnosticFormatter$1, localize, $String*, $Locale*, $String*, $ObjectArray*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractDiagnosticFormatter$1, visitCapturedType, $String*, $Type$CapturedType*, $Locale*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AbstractDiagnosticFormatter$1, visitCapturedType, $Object*, $Type$CapturedType*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.AbstractDiagnosticFormatter$1",
		"com.sun.tools.javac.code.Printer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.AbstractDiagnosticFormatter"
	};
	$loadClass(AbstractDiagnosticFormatter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractDiagnosticFormatter$1));
	});
	return class$;
}

$Class* AbstractDiagnosticFormatter$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com