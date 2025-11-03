#ifndef _javax_lang_model_util_SimpleElementVisitor14_h_
#define _javax_lang_model_util_SimpleElementVisitor14_h_
//$ class javax.lang.model.util.SimpleElementVisitor14
//$ extends javax.lang.model.util.SimpleElementVisitor9

#include <javax/lang/model/util/SimpleElementVisitor9.h>

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

class $export SimpleElementVisitor14 : public ::javax::lang::model::util::SimpleElementVisitor9 {
	$class(SimpleElementVisitor14, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleElementVisitor9)
public:
	SimpleElementVisitor14();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_SimpleElementVisitor14_h_