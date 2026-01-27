#ifndef _org_w3c_dom_DOMException_h_
#define _org_w3c_dom_DOMException_h_
//$ class org.w3c.dom.DOMException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

#pragma push_macro("DOMSTRING_SIZE_ERR")
#undef DOMSTRING_SIZE_ERR
#pragma push_macro("HIERARCHY_REQUEST_ERR")
#undef HIERARCHY_REQUEST_ERR
#pragma push_macro("INDEX_SIZE_ERR")
#undef INDEX_SIZE_ERR
#pragma push_macro("INUSE_ATTRIBUTE_ERR")
#undef INUSE_ATTRIBUTE_ERR
#pragma push_macro("INVALID_ACCESS_ERR")
#undef INVALID_ACCESS_ERR
#pragma push_macro("INVALID_CHARACTER_ERR")
#undef INVALID_CHARACTER_ERR
#pragma push_macro("INVALID_MODIFICATION_ERR")
#undef INVALID_MODIFICATION_ERR
#pragma push_macro("INVALID_STATE_ERR")
#undef INVALID_STATE_ERR
#pragma push_macro("NAMESPACE_ERR")
#undef NAMESPACE_ERR
#pragma push_macro("NOT_FOUND_ERR")
#undef NOT_FOUND_ERR
#pragma push_macro("NOT_SUPPORTED_ERR")
#undef NOT_SUPPORTED_ERR
#pragma push_macro("NO_DATA_ALLOWED_ERR")
#undef NO_DATA_ALLOWED_ERR
#pragma push_macro("NO_MODIFICATION_ALLOWED_ERR")
#undef NO_MODIFICATION_ALLOWED_ERR
#pragma push_macro("SYNTAX_ERR")
#undef SYNTAX_ERR
#pragma push_macro("TYPE_MISMATCH_ERR")
#undef TYPE_MISMATCH_ERR
#pragma push_macro("VALIDATION_ERR")
#undef VALIDATION_ERR
#pragma push_macro("WRONG_DOCUMENT_ERR")
#undef WRONG_DOCUMENT_ERR

namespace org {
	namespace w3c {
		namespace dom {

class $export DOMException : public ::java::lang::RuntimeException {
	$class(DOMException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	DOMException();
	void init$(int16_t code, $String* message);
	int16_t code = 0;
	static const int16_t INDEX_SIZE_ERR = 1;
	static const int16_t DOMSTRING_SIZE_ERR = 2;
	static const int16_t HIERARCHY_REQUEST_ERR = 3;
	static const int16_t WRONG_DOCUMENT_ERR = 4;
	static const int16_t INVALID_CHARACTER_ERR = 5;
	static const int16_t NO_DATA_ALLOWED_ERR = 6;
	static const int16_t NO_MODIFICATION_ALLOWED_ERR = 7;
	static const int16_t NOT_FOUND_ERR = 8;
	static const int16_t NOT_SUPPORTED_ERR = 9;
	static const int16_t INUSE_ATTRIBUTE_ERR = 10;
	static const int16_t INVALID_STATE_ERR = 11;
	static const int16_t SYNTAX_ERR = 12;
	static const int16_t INVALID_MODIFICATION_ERR = 13;
	static const int16_t NAMESPACE_ERR = 14;
	static const int16_t INVALID_ACCESS_ERR = 15;
	static const int16_t VALIDATION_ERR = 16;
	static const int16_t TYPE_MISMATCH_ERR = 17;
	static const int64_t serialVersionUID = (int64_t)0x5BFA6F78ED3B957C;
	DOMException(const DOMException& e);
	virtual void throw$() override;
	inline DOMException* operator ->() {
		return (DOMException*)throwing$;
	}
};

		} // dom
	} // w3c
} // org

#pragma pop_macro("DOMSTRING_SIZE_ERR")
#pragma pop_macro("HIERARCHY_REQUEST_ERR")
#pragma pop_macro("INDEX_SIZE_ERR")
#pragma pop_macro("INUSE_ATTRIBUTE_ERR")
#pragma pop_macro("INVALID_ACCESS_ERR")
#pragma pop_macro("INVALID_CHARACTER_ERR")
#pragma pop_macro("INVALID_MODIFICATION_ERR")
#pragma pop_macro("INVALID_STATE_ERR")
#pragma pop_macro("NAMESPACE_ERR")
#pragma pop_macro("NOT_FOUND_ERR")
#pragma pop_macro("NOT_SUPPORTED_ERR")
#pragma pop_macro("NO_DATA_ALLOWED_ERR")
#pragma pop_macro("NO_MODIFICATION_ALLOWED_ERR")
#pragma pop_macro("SYNTAX_ERR")
#pragma pop_macro("TYPE_MISMATCH_ERR")
#pragma pop_macro("VALIDATION_ERR")
#pragma pop_macro("WRONG_DOCUMENT_ERR")

#endif // _org_w3c_dom_DOMException_h_