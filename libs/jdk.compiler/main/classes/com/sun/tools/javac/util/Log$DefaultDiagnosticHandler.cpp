#include <com/sun/tools/javac/util/Log$DefaultDiagnosticHandler.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log$1.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef API
#undef COMPRESSED

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$1 = ::com::sun::tools::javac::util::Log$1;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Log$DefaultDiagnosticHandler::init$($Log* this$0) {
	$set(this, this$0, this$0);
	$Log$DiagnosticHandler::init$();
}

void Log$DefaultDiagnosticHandler::report($JCDiagnostic* diagnostic) {
	$useLocalObjectStack();
	if (this->this$0->expectDiagKeys != nullptr) {
		this->this$0->expectDiagKeys->remove($($nc(diagnostic)->getCode()));
	}
	$init($Log$1);
	switch ($nc($Log$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get(($$nc($nc(diagnostic)->getType()))->ordinal())) {
	case 1:
		$throwNew($IllegalArgumentException);
	case 2:
		if ((this->this$0->emitWarnings || diagnostic->isMandatory()) && !this->this$0->suppressNotes) {
			this->this$0->writeDiagnostic(diagnostic);
		}
		break;
	case 3:
		if (this->this$0->emitWarnings || diagnostic->isMandatory()) {
			if (this->this$0->nwarnings < this->this$0->MaxWarnings) {
				this->this$0->writeDiagnostic(diagnostic);
				++this->this$0->nwarnings;
			} else {
				++this->this$0->nsuppressedwarns;
			}
		}
		break;
	case 4:
		{
			$init($JCDiagnostic$DiagnosticFlag);
			bool var$0 = diagnostic->isFlagSet($JCDiagnostic$DiagnosticFlag::API);
			if (var$0 || this->this$0->shouldReport(diagnostic)) {
				if (this->this$0->nerrors < this->this$0->MaxErrors) {
					this->this$0->writeDiagnostic(diagnostic);
					++this->this$0->nerrors;
				} else {
					++this->this$0->nsuppressederrors;
				}
			}
			break;
		}
	}
	$init($JCDiagnostic$DiagnosticFlag);
	if (diagnostic->isFlagSet($JCDiagnostic$DiagnosticFlag::COMPRESSED)) {
		this->this$0->compressedOutput = true;
	}
}

Log$DefaultDiagnosticHandler::Log$DefaultDiagnosticHandler() {
}

$Class* Log$DefaultDiagnosticHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL | $SYNTHETIC, $field(Log$DefaultDiagnosticHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PRIVATE, $method(Log$DefaultDiagnosticHandler, init$, void, $Log*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Log$DefaultDiagnosticHandler, report, void, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Log$DefaultDiagnosticHandler", "com.sun.tools.javac.util.Log", "DefaultDiagnosticHandler", $PRIVATE},
		{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.Log$DefaultDiagnosticHandler",
		"com.sun.tools.javac.util.Log$DiagnosticHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Log"
	};
	$loadClass(Log$DefaultDiagnosticHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$DefaultDiagnosticHandler);
	});
	return class$;
}

$Class* Log$DefaultDiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com