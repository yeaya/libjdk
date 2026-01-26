#include <com/sun/tools/javac/util/AbstractLog.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$SimpleDiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef NOPOS
#undef NO_SOURCE

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$SimpleDiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$SimpleDiagnosticPosition;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _AbstractLog_FieldInfo_[] = {
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PROTECTED, $field(AbstractLog, diags)},
	{"source", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PROTECTED, $field(AbstractLog, source)},
	{"sourceMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/DiagnosticSource;>;", $PROTECTED, $field(AbstractLog, sourceMap)},
	{}
};

$MethodInfo _AbstractLog_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;)V", nullptr, 0, $method(AbstractLog, init$, void, $JCDiagnostic$Factory*)},
	{"currentSource", "()Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PUBLIC, $virtualMethod(AbstractLog, currentSource, $DiagnosticSource*)},
	{"directError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED | $TRANSIENT | $ABSTRACT, $virtualMethod(AbstractLog, directError, void, $String*, $ObjectArray*)},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(AbstractLog, error, void, $String*, $ObjectArray*)},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, error, void, $JCDiagnostic$Error*)},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, error, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Error*)},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, error, void, $JCDiagnostic$DiagnosticFlag*, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Error*)},
	{"error", "(ILjava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(AbstractLog, error, void, int32_t, $String*, $ObjectArray*)},
	{"error", "(ILcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, error, void, int32_t, $JCDiagnostic$Error*)},
	{"error", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;ILcom/sun/tools/javac/util/JCDiagnostic$Error;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, error, void, $JCDiagnostic$DiagnosticFlag*, int32_t, $JCDiagnostic$Error*)},
	{"getSource", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PROTECTED, $virtualMethod(AbstractLog, getSource, $DiagnosticSource*, $JavaFileObject*)},
	{"mandatoryNote", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic$Note;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, mandatoryNote, void, $JavaFileObject*, $JCDiagnostic$Note*)},
	{"mandatoryWarning", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, mandatoryWarning, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
	{"mandatoryWarning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, mandatoryWarning, void, $Lint$LintCategory*, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
	{"note", "(Lcom/sun/tools/javac/util/JCDiagnostic$Note;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, note, void, $JCDiagnostic$Note*)},
	{"note", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Note;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, note, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Note*)},
	{"note", "(ILcom/sun/tools/javac/util/JCDiagnostic$Note;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, note, void, int32_t, $JCDiagnostic$Note*)},
	{"note", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic$Note;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, note, void, $JavaFileObject*, $JCDiagnostic$Note*)},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractLog, report, void, $JCDiagnostic*)},
	{"useSource", "(Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $virtualMethod(AbstractLog, useSource, $JavaFileObject*, $JavaFileObject*)},
	{"warning", "(Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, warning, void, $JCDiagnostic$Warning*)},
	{"warning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, warning, void, $Lint$LintCategory*, $JCDiagnostic$Warning*)},
	{"warning", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, warning, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
	{"warning", "(Lcom/sun/tools/javac/code/Lint$LintCategory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, warning, void, $Lint$LintCategory*, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic$Warning*)},
	{"warning", "(ILcom/sun/tools/javac/util/JCDiagnostic$Warning;)V", nullptr, $PUBLIC, $virtualMethod(AbstractLog, warning, void, int32_t, $JCDiagnostic$Warning*)},
	{"wrap", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $method(AbstractLog, wrap, $JCDiagnostic$DiagnosticPosition*, int32_t)},
	{}
};

$ClassInfo _AbstractLog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.AbstractLog",
	"java.lang.Object",
	nullptr,
	_AbstractLog_FieldInfo_,
	_AbstractLog_MethodInfo_
};

$Object* allocate$AbstractLog($Class* clazz) {
	return $of($alloc(AbstractLog));
}

void AbstractLog::init$($JCDiagnostic$Factory* diags) {
	$set(this, diags, diags);
	$set(this, sourceMap, $new($HashMap));
}

$JavaFileObject* AbstractLog::useSource($JavaFileObject* file) {
	$var($JavaFileObject, prev, this->source == nullptr ? ($JavaFileObject*)nullptr : $nc(this->source)->getFile());
	$set(this, source, getSource(file));
	return prev;
}

$DiagnosticSource* AbstractLog::getSource($JavaFileObject* file) {
	if (file == nullptr) {
		$init($DiagnosticSource);
		return $DiagnosticSource::NO_SOURCE;
	}
	$var($DiagnosticSource, s, $cast($DiagnosticSource, $nc(this->sourceMap)->get(file)));
	if (s == nullptr) {
		$assign(s, $new($DiagnosticSource, file, this));
		$nc(this->sourceMap)->put(file, s);
	}
	return s;
}

$DiagnosticSource* AbstractLog::currentSource() {
	return this->source;
}

void AbstractLog::error($String* key, $ObjectArray* args) {
	error($($nc(this->diags)->errorKey(key, args)));
}

void AbstractLog::error($JCDiagnostic$Error* errorKey) {
	report($($nc(this->diags)->error(nullptr, this->source, nullptr, errorKey)));
}

void AbstractLog::error($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Error* errorKey) {
	report($($nc(this->diags)->error(nullptr, this->source, pos, errorKey)));
}

void AbstractLog::error($JCDiagnostic$DiagnosticFlag* flag, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Error* errorKey) {
	report($($nc(this->diags)->error(flag, this->source, pos, errorKey)));
}

void AbstractLog::error(int32_t pos, $String* key, $ObjectArray* args) {
	error(pos, $($nc(this->diags)->errorKey(key, args)));
}

void AbstractLog::error(int32_t pos, $JCDiagnostic$Error* errorKey) {
	$useLocalCurrentObjectStackCache();
	report($($nc(this->diags)->error(nullptr, this->source, $(wrap(pos)), errorKey)));
}

void AbstractLog::error($JCDiagnostic$DiagnosticFlag* flag, int32_t pos, $JCDiagnostic$Error* errorKey) {
	$useLocalCurrentObjectStackCache();
	report($($nc(this->diags)->error(flag, this->source, $(wrap(pos)), errorKey)));
}

void AbstractLog::warning($JCDiagnostic$Warning* warningKey) {
	report($($nc(this->diags)->warning(nullptr, this->source, nullptr, warningKey)));
}

void AbstractLog::warning($Lint$LintCategory* lc, $JCDiagnostic$Warning* warningKey) {
	report($($nc(this->diags)->warning(lc, nullptr, nullptr, warningKey)));
}

void AbstractLog::warning($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warningKey) {
	report($($nc(this->diags)->warning(nullptr, this->source, pos, warningKey)));
}

void AbstractLog::warning($Lint$LintCategory* lc, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warningKey) {
	report($($nc(this->diags)->warning(lc, this->source, pos, warningKey)));
}

void AbstractLog::warning(int32_t pos, $JCDiagnostic$Warning* warningKey) {
	$useLocalCurrentObjectStackCache();
	report($($nc(this->diags)->warning(nullptr, this->source, $(wrap(pos)), warningKey)));
}

void AbstractLog::mandatoryWarning($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warningKey) {
	report($($nc(this->diags)->mandatoryWarning(nullptr, this->source, pos, warningKey)));
}

void AbstractLog::mandatoryWarning($Lint$LintCategory* lc, $JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Warning* warningKey) {
	report($($nc(this->diags)->mandatoryWarning(lc, this->source, pos, warningKey)));
}

void AbstractLog::note($JCDiagnostic$Note* noteKey) {
	report($($nc(this->diags)->note(this->source, nullptr, noteKey)));
}

void AbstractLog::note($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic$Note* noteKey) {
	report($($nc(this->diags)->note(this->source, pos, noteKey)));
}

void AbstractLog::note(int32_t pos, $JCDiagnostic$Note* noteKey) {
	$useLocalCurrentObjectStackCache();
	report($($nc(this->diags)->note(this->source, $(wrap(pos)), noteKey)));
}

void AbstractLog::note($JavaFileObject* file, $JCDiagnostic$Note* noteKey) {
	$useLocalCurrentObjectStackCache();
	report($($nc(this->diags)->note($(getSource(file)), nullptr, noteKey)));
}

void AbstractLog::mandatoryNote($JavaFileObject* file, $JCDiagnostic$Note* noteKey) {
	$useLocalCurrentObjectStackCache();
	report($($nc(this->diags)->mandatoryNote($(getSource(file)), noteKey)));
}

$JCDiagnostic$DiagnosticPosition* AbstractLog::wrap(int32_t pos) {
	return (pos == $Position::NOPOS ? ($JCDiagnostic$DiagnosticPosition*)nullptr : static_cast<$JCDiagnostic$DiagnosticPosition*>($new($JCDiagnostic$SimpleDiagnosticPosition, pos)));
}

AbstractLog::AbstractLog() {
}

$Class* AbstractLog::load$($String* name, bool initialize) {
	$loadClass(AbstractLog, name, initialize, &_AbstractLog_ClassInfo_, allocate$AbstractLog);
	return class$;
}

$Class* AbstractLog::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com