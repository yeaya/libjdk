#ifndef _javax_lang_model_element_ElementVisitor_h_
#define _javax_lang_model_element_ElementVisitor_h_
//$ interface javax.lang.model.element.ElementVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ExecutableElement;
				class ModuleElement;
				class PackageElement;
				class RecordComponentElement;
				class TypeElement;
				class TypeParameterElement;
				class VariableElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export ElementVisitor : public ::java::lang::Object {
	$interface(ElementVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visit(::javax::lang::model::element::Element* e, Object$* p) {return nullptr;}
	virtual $Object* visit(::javax::lang::model::element::Element* e);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) {return nullptr;}
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* p);
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* p) {return nullptr;}
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p);
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) {return nullptr;}
	virtual $Object* visitTypeParameter(::javax::lang::model::element::TypeParameterElement* e, Object$* p) {return nullptr;}
	virtual $Object* visitUnknown(::javax::lang::model::element::Element* e, Object$* p) {return nullptr;}
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* p) {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ElementVisitor_h_