#include <javax/lang/model/util/ElementScanner9.h>

#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/ElementScanner8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ElementScanner6 = ::javax::lang::model::util::ElementScanner6;
using $ElementScanner8 = ::javax::lang::model::util::ElementScanner8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementScanner9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _ElementScanner9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementScanner9_Attribute_var$0},
	{}
};

$MethodInfo _ElementScanner9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ElementScanner9::*)()>(&ElementScanner9::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(ElementScanner9::*)(Object$*)>(&ElementScanner9::init$))},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _ElementScanner9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementScanner9",
	"javax.lang.model.util.ElementScanner8",
	nullptr,
	nullptr,
	_ElementScanner9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner8<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementScanner9_Annotations_
};

$Object* allocate$ElementScanner9($Class* clazz) {
	return $of($alloc(ElementScanner9));
}

void ElementScanner9::init$() {
	$ElementScanner8::init$(nullptr);
}

void ElementScanner9::init$(Object$* defaultValue) {
	$ElementScanner8::init$(defaultValue);
}

$Object* ElementScanner9::visitModule($ModuleElement* e, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(e)->getEnclosedElements())), p));
}

ElementScanner9::ElementScanner9() {
}

$Class* ElementScanner9::load$($String* name, bool initialize) {
	$loadClass(ElementScanner9, name, initialize, &_ElementScanner9_ClassInfo_, allocate$ElementScanner9);
	return class$;
}

$Class* ElementScanner9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax