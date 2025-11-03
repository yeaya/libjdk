#ifndef _javax_lang_model_util_AbstractElementVisitor14_h_
#define _javax_lang_model_util_AbstractElementVisitor14_h_
//$ class javax.lang.model.util.AbstractElementVisitor14
//$ extends javax.lang.model.util.AbstractElementVisitor9

#include <javax/lang/model/util/AbstractElementVisitor9.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class RecordComponentElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import AbstractElementVisitor14 : public ::javax::lang::model::util::AbstractElementVisitor9 {
	$class(AbstractElementVisitor14, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractElementVisitor9)
public:
	AbstractElementVisitor14();
	void init$();
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* t, Object$* p) override {return nullptr;}
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractElementVisitor14_h_