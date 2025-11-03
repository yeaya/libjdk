#ifndef _javax_lang_model_util_SimpleTypeVisitor8_h_
#define _javax_lang_model_util_SimpleTypeVisitor8_h_
//$ class javax.lang.model.util.SimpleTypeVisitor8
//$ extends javax.lang.model.util.SimpleTypeVisitor7

#include <javax/lang/model/util/SimpleTypeVisitor7.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class IntersectionType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export SimpleTypeVisitor8 : public ::javax::lang::model::util::SimpleTypeVisitor7 {
	$class(SimpleTypeVisitor8, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleTypeVisitor7)
public:
	SimpleTypeVisitor8();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitIntersection(::javax::lang::model::type::IntersectionType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_SimpleTypeVisitor8_h_