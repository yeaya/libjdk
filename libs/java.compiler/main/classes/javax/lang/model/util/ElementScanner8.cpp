#include <javax/lang/model/util/ElementScanner8.h>

#include <javax/lang/model/util/ElementScanner7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ElementScanner7 = ::javax::lang::model::util::ElementScanner7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute ElementScanner8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _ElementScanner8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", ElementScanner8_Attribute_var$0},
	{}
};

$MethodInfo _ElementScanner8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ElementScanner8, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementScanner8, init$, void, Object$*)},
	{}
};

$ClassInfo _ElementScanner8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementScanner8",
	"javax.lang.model.util.ElementScanner7",
	nullptr,
	nullptr,
	_ElementScanner8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner7<TR;TP;>;",
	nullptr,
	nullptr,
	_ElementScanner8_Annotations_
};

$Object* allocate$ElementScanner8($Class* clazz) {
	return $of($alloc(ElementScanner8));
}

void ElementScanner8::init$() {
	$ElementScanner7::init$(nullptr);
}

void ElementScanner8::init$(Object$* defaultValue) {
	$ElementScanner7::init$(defaultValue);
}

ElementScanner8::ElementScanner8() {
}

$Class* ElementScanner8::load$($String* name, bool initialize) {
	$loadClass(ElementScanner8, name, initialize, &_ElementScanner8_ClassInfo_, allocate$ElementScanner8);
	return class$;
}

$Class* ElementScanner8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax