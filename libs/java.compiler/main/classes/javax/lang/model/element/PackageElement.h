#ifndef _javax_lang_model_element_PackageElement_h_
#define _javax_lang_model_element_PackageElement_h_
//$ interface javax.lang.model.element.PackageElement
//$ extends javax.lang.model.element.QualifiedNameable

#include <javax/lang/model/element/QualifiedNameable.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export PackageElement : public ::javax::lang::model::element::QualifiedNameable {
	$interface(PackageElement, $NO_CLASS_INIT, ::javax::lang::model::element::QualifiedNameable)
public:
	virtual ::javax::lang::model::type::TypeMirror* asType() override {return nullptr;}
	virtual ::java::util::List* getEnclosedElements() override {return nullptr;}
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override {return nullptr;}
	virtual ::javax::lang::model::element::Name* getQualifiedName() override {return nullptr;}
	virtual ::javax::lang::model::element::Name* getSimpleName() override {return nullptr;}
	virtual bool isUnnamed() {return false;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_PackageElement_h_