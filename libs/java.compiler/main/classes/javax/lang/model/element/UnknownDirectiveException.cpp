#include <javax/lang/model/element/UnknownDirectiveException.h>
#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnknownEntityException = ::javax::lang::model::UnknownEntityException;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

void UnknownDirectiveException::init$($ModuleElement$Directive* d, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown directive: "_s, d}));
	$set(this, directive, d);
	$set(this, parameter, p);
}

$ModuleElement$Directive* UnknownDirectiveException::getUnknownDirective() {
	return this->directive;
}

$Object* UnknownDirectiveException::getArgument() {
	return this->parameter;
}

UnknownDirectiveException::UnknownDirectiveException() {
}

UnknownDirectiveException::UnknownDirectiveException(const UnknownDirectiveException& e) : $UnknownEntityException(e) {
}

void UnknownDirectiveException::throw$() {
	throw *this;
}

$Class* UnknownDirectiveException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownDirectiveException, serialVersionUID)},
		{"directive", "Ljavax/lang/model/element/ModuleElement$Directive;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(UnknownDirectiveException, directive)},
		{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(UnknownDirectiveException, parameter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/lang/model/element/ModuleElement$Directive;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UnknownDirectiveException, init$, void, $ModuleElement$Directive*, Object$*)},
		{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownDirectiveException, getArgument, $Object*)},
		{"getUnknownDirective", "()Ljavax/lang/model/element/ModuleElement$Directive;", nullptr, $PUBLIC, $virtualMethod(UnknownDirectiveException, getUnknownDirective, $ModuleElement$Directive*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.element.UnknownDirectiveException",
		"javax.lang.model.UnknownEntityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownDirectiveException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownDirectiveException);
	});
	return class$;
}

$Class* UnknownDirectiveException::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax