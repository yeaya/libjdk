#ifndef _javax_lang_model_element_ModuleElement$Directive_h_
#define _javax_lang_model_element_ModuleElement$Directive_h_
//$ interface javax.lang.model.element.ModuleElement$Directive
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$DirectiveKind;
				class ModuleElement$DirectiveVisitor;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export ModuleElement$Directive : public ::java::lang::Object {
	$interface(ModuleElement$Directive, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* accept(::javax::lang::model::element::ModuleElement$DirectiveVisitor* v, Object$* p) {return nullptr;}
	virtual ::javax::lang::model::element::ModuleElement$DirectiveKind* getKind() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_ModuleElement$Directive_h_