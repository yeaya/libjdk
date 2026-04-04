#include <javax/tools/DiagnosticCollector.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace javax {
	namespace tools {

void DiagnosticCollector::init$() {
	$set(this, diagnostics, $Collections::synchronizedList($$new($ArrayList)));
}

void DiagnosticCollector::report($Diagnostic* diagnostic) {
	$Objects::requireNonNull(diagnostic);
	$nc(this->diagnostics)->add(diagnostic);
}

$List* DiagnosticCollector::getDiagnostics() {
	return $Collections::unmodifiableList(this->diagnostics);
}

DiagnosticCollector::DiagnosticCollector() {
}

$Class* DiagnosticCollector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"diagnostics", "Ljava/util/List;", "Ljava/util/List<Ljavax/tools/Diagnostic<+TS;>;>;", $PRIVATE, $field(DiagnosticCollector, diagnostics)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DiagnosticCollector, init$, void)},
		{"getDiagnostics", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/tools/Diagnostic<+TS;>;>;", $PUBLIC, $method(DiagnosticCollector, getDiagnostics, $List*)},
		{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+TS;>;)V", $PUBLIC, $virtualMethod(DiagnosticCollector, report, void, $Diagnostic*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.tools.DiagnosticCollector",
		"java.lang.Object",
		"javax.tools.DiagnosticListener",
		fieldInfos$$,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/tools/DiagnosticListener<TS;>;"
	};
	$loadClass(DiagnosticCollector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DiagnosticCollector);
	});
	return class$;
}

$Class* DiagnosticCollector::class$ = nullptr;

	} // tools
} // javax