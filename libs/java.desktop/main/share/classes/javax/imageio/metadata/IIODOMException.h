#ifndef _javax_imageio_metadata_IIODOMException_h_
#define _javax_imageio_metadata_IIODOMException_h_
//$ class javax.imageio.metadata.IIODOMException
//$ extends org.w3c.dom.DOMException

#include <org/w3c/dom/DOMException.h>

namespace javax {
	namespace imageio {
		namespace metadata {

class IIODOMException : public ::org::w3c::dom::DOMException {
	$class(IIODOMException, $NO_CLASS_INIT, ::org::w3c::dom::DOMException)
public:
	IIODOMException();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0xc35c61ad2b9a6954;
	IIODOMException(const IIODOMException& e);
	virtual void throw$() override;
	inline IIODOMException* operator ->() const {
		return (IIODOMException*)throwing$;
	}
	inline operator IIODOMException*() const {
		return (IIODOMException*)throwing$;
	}
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIODOMException_h_