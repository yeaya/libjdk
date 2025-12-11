#include <javax/lang/model/util/ElementScanner14.h>

#include <java/lang/Iterable.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/ElementScanner9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $ElementScanner9 = ::javax::lang::model::util::ElementScanner9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementScanner14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _ElementScanner14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementScanner14_Attribute_var$0},
	{}
};

$MethodInfo _ElementScanner14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ElementScanner14::*)()>(&ElementScanner14::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(ElementScanner14::*)(Object$*)>(&ElementScanner14::init$))},
	{"createScanningList", "(Ljavax/lang/model/element/Parameterizable;Ljava/util/List;)Ljava/util/List;", "(Ljavax/lang/model/element/Parameterizable;Ljava/util/List<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<+Ljavax/lang/model/element/Element;>;", $PRIVATE, $method(static_cast<$List*(ElementScanner14::*)($Parameterizable*,$List*)>(&ElementScanner14::createScanningList))},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _ElementScanner14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementScanner14",
	"javax.lang.model.util.ElementScanner9",
	nullptr,
	nullptr,
	_ElementScanner14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner9<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementScanner14_Annotations_
};

$Object* allocate$ElementScanner14($Class* clazz) {
	return $of($alloc(ElementScanner14));
}

void ElementScanner14::init$() {
	$ElementScanner9::init$(nullptr);
}

void ElementScanner14::init$(Object$* defaultValue) {
	$ElementScanner9::init$(defaultValue);
}

$Object* ElementScanner14::visitType($TypeElement* e, Object$* p) {
	$useLocalCurrentObjectStackCache();
	return $of(scan($(static_cast<$Iterable*>(createScanningList(e, $($nc(e)->getEnclosedElements())))), p));
}

$Object* ElementScanner14::visitExecutable($ExecutableElement* e, Object$* p) {
	$useLocalCurrentObjectStackCache();
	return $of(scan($(static_cast<$Iterable*>(createScanningList(e, $($nc(e)->getParameters())))), p));
}

$List* ElementScanner14::createScanningList($Parameterizable* element, $List* toBeScanned) {
	$useLocalCurrentObjectStackCache();
	$var($List, typeParameters, $nc(element)->getTypeParameters());
	if ($nc(typeParameters)->isEmpty()) {
		return toBeScanned;
	} else {
		$var($List, scanningList, $new($ArrayList, static_cast<$Collection*>(typeParameters)));
		scanningList->addAll(toBeScanned);
		return scanningList;
	}
}

$Object* ElementScanner14::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getEnclosedElements())), p));
}

ElementScanner14::ElementScanner14() {
}

$Class* ElementScanner14::load$($String* name, bool initialize) {
	$loadClass(ElementScanner14, name, initialize, &_ElementScanner14_ClassInfo_, allocate$ElementScanner14);
	return class$;
}

$Class* ElementScanner14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax