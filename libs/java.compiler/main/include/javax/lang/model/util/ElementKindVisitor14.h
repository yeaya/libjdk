#ifndef _javax_lang_model_util_ElementKindVisitor14_h_
#define _javax_lang_model_util_ElementKindVisitor14_h_
//$ class javax.lang.model.util.ElementKindVisitor14
//$ extends javax.lang.model.util.ElementKindVisitor9

#include <javax/lang/model/util/ElementKindVisitor9.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class RecordComponentElement;
				class TypeElement;
				class VariableElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import ElementKindVisitor14 : public ::javax::lang::model::util::ElementKindVisitor9 {
	$class(ElementKindVisitor14, $NO_CLASS_INIT, ::javax::lang::model::util::ElementKindVisitor9)
public:
	ElementKindVisitor14();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p) override;
	virtual $Object* visitTypeAsRecord(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	virtual $Object* visitVariableAsBindingVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementKindVisitor14_h_