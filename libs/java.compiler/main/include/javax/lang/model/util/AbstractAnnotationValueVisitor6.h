#ifndef _javax_lang_model_util_AbstractAnnotationValueVisitor6_h_
#define _javax_lang_model_util_AbstractAnnotationValueVisitor6_h_
//$ class javax.lang.model.util.AbstractAnnotationValueVisitor6
//$ extends javax.lang.model.element.AnnotationValueVisitor

#include <javax/lang/model/element/AnnotationValueVisitor.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationValue;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import AbstractAnnotationValueVisitor6 : public ::javax::lang::model::element::AnnotationValueVisitor {
	$class(AbstractAnnotationValueVisitor6, $NO_CLASS_INIT, ::javax::lang::model::element::AnnotationValueVisitor)
public:
	AbstractAnnotationValueVisitor6();
	void init$();
	virtual $Object* visit(::javax::lang::model::element::AnnotationValue* av, Object$* p) override;
	virtual $Object* visit(::javax::lang::model::element::AnnotationValue* av) override;
	virtual $Object* visitUnknown(::javax::lang::model::element::AnnotationValue* av, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractAnnotationValueVisitor6_h_