#include <javax/tools/DiagnosticCollector.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace javax {
	namespace tools {

$FieldInfo _DiagnosticCollector_FieldInfo_[] = {
	{"diagnostics", "Ljava/util/List;", "Ljava/util/List<Ljavax/tools/Diagnostic<+TS;>;>;", $PRIVATE, $field(DiagnosticCollector, diagnostics)},
	{}
};

$MethodInfo _DiagnosticCollector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DiagnosticCollector::*)()>(&DiagnosticCollector::init$))},
	{"getDiagnostics", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/tools/Diagnostic<+TS;>;>;", $PUBLIC, $method(static_cast<$List*(DiagnosticCollector::*)()>(&DiagnosticCollector::getDiagnostics))},
	{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+TS;>;)V", $PUBLIC},
	{}
};

$ClassInfo _DiagnosticCollector_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.tools.DiagnosticCollector",
	"java.lang.Object",
	"javax.tools.DiagnosticListener",
	_DiagnosticCollector_FieldInfo_,
	_DiagnosticCollector_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/tools/DiagnosticListener<TS;>;"
};

$Object* allocate$DiagnosticCollector($Class* clazz) {
	return $of($alloc(DiagnosticCollector));
}

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
	$loadClass(DiagnosticCollector, name, initialize, &_DiagnosticCollector_ClassInfo_, allocate$DiagnosticCollector);
	return class$;
}

$Class* DiagnosticCollector::class$ = nullptr;

	} // tools
} // javax