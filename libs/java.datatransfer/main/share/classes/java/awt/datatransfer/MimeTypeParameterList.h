#ifndef _java_awt_datatransfer_MimeTypeParameterList_h_
#define _java_awt_datatransfer_MimeTypeParameterList_h_
//$ class java.awt.datatransfer.MimeTypeParameterList
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("TSPECIALS")
#undef TSPECIALS

namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class MimeTypeParameterList : public ::java::lang::Cloneable {
	$class(MimeTypeParameterList, 0, ::java::lang::Cloneable)
public:
	MimeTypeParameterList();
	void init$();
	void init$($String* rawdata);
	virtual $Object* clone() override;
	virtual bool equals(Object$* thatObject) override;
	virtual $String* get($String* name);
	virtual ::java::util::Enumeration* getNames();
	virtual int32_t hashCode() override;
	virtual bool isEmpty();
	static bool isTokenChar(char16_t c);
	virtual void parse($String* rawdata);
	static $String* quote($String* value);
	virtual void remove($String* name);
	virtual void set($String* name, $String* value);
	virtual int32_t size();
	static int32_t skipWhiteSpace($String* rawdata, int32_t i);
	virtual $String* toString() override;
	static $String* unquote($String* value);
	::java::util::Hashtable* parameters = nullptr;
	static $String* TSPECIALS;
};

		} // datatransfer
	} // awt
} // java

#pragma pop_macro("TSPECIALS")

#endif // _java_awt_datatransfer_MimeTypeParameterList_h_