#ifndef _com_sun_jarsigner_ContentSigner_h_
#define _com_sun_jarsigner_ContentSigner_h_
//$ class com.sun.jarsigner.ContentSigner
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jarsigner {
			class ContentSignerParameters;
		}
	}
}

namespace com {
	namespace sun {
		namespace jarsigner {

class $export ContentSigner : public ::java::lang::Object {
	$class(ContentSigner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ContentSigner();
	void init$();
	virtual $bytes* generateSignedData(::com::sun::jarsigner::ContentSignerParameters* parameters, bool omitContent, bool applyTimestamp) {return nullptr;}
};

		} // jarsigner
	} // sun
} // com

#endif // _com_sun_jarsigner_ContentSigner_h_