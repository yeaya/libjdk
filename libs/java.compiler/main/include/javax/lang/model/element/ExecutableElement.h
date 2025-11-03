#ifndef _javax_lang_model_element_ExecutableElement_h_
#define _javax_lang_model_element_ExecutableElement_h_
//$ interface javax.lang.model.element.ExecutableElement
//$ extends javax.lang.model.element.Parameterizable

#include <javax/lang/model/element/Parameterizable.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationValue;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import ExecutableElement : public ::javax::lang::model::element::Parameterizable {
	$interface(ExecutableElement, $NO_CLASS_INIT, ::javax::lang::model::element::Parameterizable)
public:
	virtual ::javax::lang::model::type::TypeMirror* asType() override {return nullptr;}
	virtual ::javax::lang::model::element::AnnotationValue* getDefaultValue() {return nullptr;}
	virtual ::java::util::List* getParameters() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getReceiverType() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getReturnType() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getSimpleName() override {return nullptr;}
	virtual ::java::util::List* getThrownTypes() {return nullptr;}
	virtual ::java::util::List* getTypeParameters() override {return nullptr;}
	virtual bool isDefault() {return false;}
	virtual bool isVarArgs() {return false;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ExecutableElement_h_