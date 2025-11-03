#ifndef _javax_lang_model_element_UnknownAnnotationValueException_h_
#define _javax_lang_model_element_UnknownAnnotationValueException_h_
//$ class javax.lang.model.element.UnknownAnnotationValueException
//$ extends javax.lang.model.UnknownEntityException

#include <javax/lang/model/UnknownEntityException.h>

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
			namespace element {

class $export UnknownAnnotationValueException : public ::javax::lang::model::UnknownEntityException {
	$class(UnknownAnnotationValueException, $NO_CLASS_INIT, ::javax::lang::model::UnknownEntityException)
public:
	UnknownAnnotationValueException();
	void init$(::javax::lang::model::element::AnnotationValue* av, Object$* p);
	virtual $Object* getArgument();
	virtual ::javax::lang::model::element::AnnotationValue* getUnknownAnnotationValue();
	static const int64_t serialVersionUID = (int64_t)269;
	::javax::lang::model::element::AnnotationValue* av = nullptr;
	$Object* parameter = nullptr;
	UnknownAnnotationValueException(const UnknownAnnotationValueException& e);
	virtual void throw$() override;
	inline UnknownAnnotationValueException* operator ->() {
		return (UnknownAnnotationValueException*)throwing$;
	}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_UnknownAnnotationValueException_h_