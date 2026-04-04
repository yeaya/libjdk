#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <com/sun/tools/javac/code/DeferredLintHandler$1.h>
#include <com/sun/tools/javac/code/DeferredLintHandler$LintLogger.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef IMMEDIATE_POSITION

using $DeferredLintHandler$1 = ::com::sun::tools::javac::code::DeferredLintHandler$1;
using $DeferredLintHandler$LintLogger = ::com::sun::tools::javac::code::DeferredLintHandler$LintLogger;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Context$Key* DeferredLintHandler::deferredLintHandlerKey = nullptr;
$JCDiagnostic$DiagnosticPosition* DeferredLintHandler::IMMEDIATE_POSITION = nullptr;

DeferredLintHandler* DeferredLintHandler::instance($Context* context) {
	$init(DeferredLintHandler);
	$var(DeferredLintHandler, instance, $cast(DeferredLintHandler, $nc(context)->get(DeferredLintHandler::deferredLintHandlerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(DeferredLintHandler, context));
	}
	return instance;
}

void DeferredLintHandler::init$($Context* context) {
	$set(this, loggersQueue, $new($HashMap));
	$nc(context)->put(DeferredLintHandler::deferredLintHandlerKey, this);
	$set(this, currentPos, DeferredLintHandler::IMMEDIATE_POSITION);
}

void DeferredLintHandler::report($DeferredLintHandler$LintLogger* logger) {
	if (this->currentPos == DeferredLintHandler::IMMEDIATE_POSITION) {
		$nc(logger)->report();
	} else {
		$var($ListBuffer, loggers, $cast($ListBuffer, $nc(this->loggersQueue)->get(this->currentPos)));
		if (loggers == nullptr) {
			this->loggersQueue->put(this->currentPos, $assign(loggers, $new($ListBuffer)));
		}
		$nc(loggers)->append(logger);
	}
}

void DeferredLintHandler::flush($JCDiagnostic$DiagnosticPosition* pos) {
	$useLocalObjectStack();
	$var($ListBuffer, loggers, $cast($ListBuffer, $nc(this->loggersQueue)->get(pos)));
	if (loggers != nullptr) {
		{
			$var($Iterator, i$, loggers->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DeferredLintHandler$LintLogger, lintLogger, $cast($DeferredLintHandler$LintLogger, i$->next()));
				{
					$nc(lintLogger)->report();
				}
			}
		}
		$nc(this->loggersQueue)->remove(pos);
	}
}

$JCDiagnostic$DiagnosticPosition* DeferredLintHandler::setPos($JCDiagnostic$DiagnosticPosition* currentPos) {
	$var($JCDiagnostic$DiagnosticPosition, prevPosition, this->currentPos);
	$set(this, currentPos, currentPos);
	return prevPosition;
}

$JCDiagnostic$DiagnosticPosition* DeferredLintHandler::immediate() {
	return setPos(DeferredLintHandler::IMMEDIATE_POSITION);
}

void DeferredLintHandler::clinit$($Class* clazz) {
	$assignStatic(DeferredLintHandler::deferredLintHandlerKey, $new($Context$Key));
	$assignStatic(DeferredLintHandler::IMMEDIATE_POSITION, $new($DeferredLintHandler$1));
}

DeferredLintHandler::DeferredLintHandler() {
}

$Class* DeferredLintHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"deferredLintHandlerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/DeferredLintHandler;>;", $PROTECTED | $STATIC | $FINAL, $staticField(DeferredLintHandler, deferredLintHandlerKey)},
		{"currentPos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $field(DeferredLintHandler, currentPos)},
		{"loggersQueue", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/DeferredLintHandler$LintLogger;>;>;", $PRIVATE, $field(DeferredLintHandler, loggersQueue)},
		{"IMMEDIATE_POSITION", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DeferredLintHandler, IMMEDIATE_POSITION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(DeferredLintHandler, init$, void, $Context*)},
		{"flush", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler, flush, void, $JCDiagnostic$DiagnosticPosition*)},
		{"immediate", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler, immediate, $JCDiagnostic$DiagnosticPosition*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/DeferredLintHandler;", nullptr, $PUBLIC | $STATIC, $staticMethod(DeferredLintHandler, instance, DeferredLintHandler*, $Context*)},
		{"report", "(Lcom/sun/tools/javac/code/DeferredLintHandler$LintLogger;)V", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler, report, void, $DeferredLintHandler$LintLogger*)},
		{"setPos", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $virtualMethod(DeferredLintHandler, setPos, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$DiagnosticPosition*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredLintHandler$LintLogger", "com.sun.tools.javac.code.DeferredLintHandler", "LintLogger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.DeferredLintHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.DeferredLintHandler",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger,com.sun.tools.javac.code.DeferredLintHandler$1"
	};
	$loadClass(DeferredLintHandler, name, initialize, &classInfo$$, DeferredLintHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredLintHandler);
	});
	return class$;
}

$Class* DeferredLintHandler::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com