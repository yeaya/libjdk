#ifndef _javax_naming_MalformedLinkException_h_
#define _javax_naming_MalformedLinkException_h_
//$ class javax.naming.MalformedLinkException
//$ extends javax.naming.LinkException

#include <javax/naming/LinkException.h>

namespace javax {
	namespace naming {

class $import MalformedLinkException : public ::javax::naming::LinkException {
	$class(MalformedLinkException, $NO_CLASS_INIT, ::javax::naming::LinkException)
public:
	MalformedLinkException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xd570bfd1f64f889e;
	MalformedLinkException(const MalformedLinkException& e);
	virtual void throw$() override;
	inline MalformedLinkException* operator ->() const {
		return (MalformedLinkException*)throwing$;
	}
	inline operator MalformedLinkException*() const {
		return (MalformedLinkException*)throwing$;
	}
};

	} // naming
} // javax

#endif // _javax_naming_MalformedLinkException_h_