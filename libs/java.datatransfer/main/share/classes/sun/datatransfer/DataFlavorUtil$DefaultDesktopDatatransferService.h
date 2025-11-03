#ifndef _sun_datatransfer_DataFlavorUtil$DefaultDesktopDatatransferService_h_
#define _sun_datatransfer_DataFlavorUtil$DefaultDesktopDatatransferService_h_
//$ class sun.datatransfer.DataFlavorUtil$DefaultDesktopDatatransferService
//$ extends sun.datatransfer.DesktopDatatransferService

#include <sun/datatransfer/DesktopDatatransferService.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

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

class DataFlavorUtil$DefaultDesktopDatatransferService : public ::sun::datatransfer::DesktopDatatransferService {
	$class(DataFlavorUtil$DefaultDesktopDatatransferService, 0, ::sun::datatransfer::DesktopDatatransferService)
public:
	DataFlavorUtil$DefaultDesktopDatatransferService();
	void init$();
	virtual $String* getDefaultUnicodeEncoding() override;
	static ::sun::datatransfer::DesktopDatatransferService* getDesktopService();
	virtual ::java::awt::datatransfer::FlavorMap* getFlavorMap(::java::util::function::Supplier* supplier) override;
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForFlavor(::java::awt::datatransfer::DataFlavor* df) override;
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForNative($String* nat) override;
	virtual void invokeOnEventThread(::java::lang::Runnable* r) override;
	virtual bool isDesktopPresent() override;
	virtual void registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators) override;
	static ::sun::datatransfer::DesktopDatatransferService* INSTANCE;
	$volatile(::java::awt::datatransfer::FlavorMap*) flavorMap = nullptr;
};

	} // datatransfer
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_datatransfer_DataFlavorUtil$DefaultDesktopDatatransferService_h_