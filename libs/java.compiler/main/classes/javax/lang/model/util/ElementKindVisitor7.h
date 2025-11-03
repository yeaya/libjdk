#ifndef _javax_lang_model_util_ElementKindVisitor7_h_
#define _javax_lang_model_util_ElementKindVisitor7_h_
//$ class javax.lang.model.util.ElementKindVisitor7
//$ extends javax.lang.model.util.ElementKindVisitor6

#include <javax/lang/model/util/ElementKindVisitor6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class VariableElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export ElementKindVisitor7 : public ::javax::lang::model::util::ElementKindVisitor6 {
	$class(ElementKindVisitor7, $NO_CLASS_INIT, ::javax::lang::model::util::ElementKindVisitor6)
public:
	ElementKindVisitor7();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitVariableAsResourceVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementKindVisitor7_h_