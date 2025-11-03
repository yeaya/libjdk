#ifndef _java_awt_datatransfer_MimeType_h_
#define _java_awt_datatransfer_MimeType_h_
//$ class java.awt.datatransfer.MimeType
//$ extends java.io.Externalizable
//$ implements java.lang.Cloneable

#include <java/io/Externalizable.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("TSPECIALS")
#undef TSPECIALS

namespace java {
	namespace awt {
		namespace datatransfer {
			class MimeTypeParameterList;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class MimeType : public ::java::io::Externalizable, public ::java::lang::Cloneable {
	$class(MimeType, 0, ::java::io::Externalizable, ::java::lang::Cloneable)
public:
	MimeType();
	virtual void finalize() override;
	void init$();
	void init$($String* rawdata);
	void init$($String* primary, $String* sub);
	void init$($String* primary, $String* sub, ::java::awt::datatransfer::MimeTypeParameterList* mtpl);
	virtual $Object* clone() override;
	virtual bool equals(Object$* thatObject) override;
	virtual $String* getBaseType();
	virtual $String* getParameter($String* name);
	virtual ::java::awt::datatransfer::MimeTypeParameterList* getParameters();
	virtual $String* getPrimaryType();
	virtual $String* getSubType();
	virtual int32_t hashCode() override;
	static bool isTokenChar(char16_t c);
	bool isValidToken($String* s);
	virtual bool match(::java::awt::datatransfer::MimeType* type);
	virtual bool match($String* rawdata);
	void parse($String* rawdata);
	virtual void readExternal(::java::io::ObjectInput* in) override;
	virtual void removeParameter($String* name);
	virtual void setParameter($String* name, $String* value);
	virtual $String* toString() override;
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	static const int64_t serialVersionUID = (int64_t)0xA4D735B9EF75981E;
	$String* primaryType = nullptr;
	$String* subType = nullptr;
	::java::awt::datatransfer::MimeTypeParameterList* parameters = nullptr;
	static $String* TSPECIALS;
};

		} // datatransfer
	} // awt
} // java

#pragma pop_macro("TSPECIALS")

#endif // _java_awt_datatransfer_MimeType_h_