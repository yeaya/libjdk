#ifndef _sun_datatransfer_DesktopDatatransferService_h_
#define _sun_datatransfer_DesktopDatatransferService_h_
//$ interface sun.datatransfer.DesktopDatatransferService
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class FlavorMap;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class LinkedHashSet;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace sun {
	namespace datatransfer {

class $export DesktopDatatransferService : public ::java::lang::Object {
	$interface(DesktopDatatransferService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getDefaultUnicodeEncoding() {return nullptr;}
	virtual ::java::awt::datatransfer::FlavorMap* getFlavorMap(::java::util::function::Supplier* supplier) {return nullptr;}
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForFlavor(::java::awt::datatransfer::DataFlavor* df) {return nullptr;}
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForNative($String* nat) {return nullptr;}
	virtual void invokeOnEventThread(::java::lang::Runnable* r) {}
	virtual bool isDesktopPresent() {return false;}
	virtual void registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators) {}
};

	} // datatransfer
} // sun

#endif // _sun_datatransfer_DesktopDatatransferService_h_