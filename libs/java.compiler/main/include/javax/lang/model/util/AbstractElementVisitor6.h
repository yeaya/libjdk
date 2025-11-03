#ifndef _javax_lang_model_util_AbstractElementVisitor6_h_
#define _javax_lang_model_util_AbstractElementVisitor6_h_
//$ class javax.lang.model.util.AbstractElementVisitor6
//$ extends javax.lang.model.element.ElementVisitor

#include <javax/lang/model/element/ElementVisitor.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ModuleElement;
				class RecordComponentElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import AbstractElementVisitor6 : public ::javax::lang::model::element::ElementVisitor {
	$class(AbstractElementVisitor6, $NO_CLASS_INIT, ::javax::lang::model::element::ElementVisitor)
public:
	AbstractElementVisitor6();
	void init$();
	virtual $Object* visit(::javax::lang::model::element::Element* e, Object$* p) override;
	virtual $Object* visit(::javax::lang::model::element::Element* e) override;
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* p) override;
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p) override;
	virtual $Object* visitUnknown(::javax::lang::model::element::Element* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractElementVisitor6_h_