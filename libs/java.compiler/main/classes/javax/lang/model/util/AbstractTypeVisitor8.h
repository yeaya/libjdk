#ifndef _javax_lang_model_util_AbstractTypeVisitor8_h_
#define _javax_lang_model_util_AbstractTypeVisitor8_h_
//$ class javax.lang.model.util.AbstractTypeVisitor8
//$ extends javax.lang.model.util.AbstractTypeVisitor7

#include <javax/lang/model/util/AbstractTypeVisitor7.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export AbstractTypeVisitor8 : public ::javax::lang::model::util::AbstractTypeVisitor7 {
	$class(AbstractTypeVisitor8, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractTypeVisitor7)
public:
	AbstractTypeVisitor8();
	void init$();
	virtual $Object* visitIntersection(::javax::lang::model::type::IntersectionType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractTypeVisitor8_h_