#ifndef _java_awt_datatransfer_SystemFlavorMap_h_
#define _java_awt_datatransfer_SystemFlavorMap_h_
//$ class java.awt.datatransfer.SystemFlavorMap
//$ extends java.awt.datatransfer.FlavorTable

#include <java/awt/datatransfer/FlavorTable.h>
#include <java/lang/Array.h>

#pragma push_macro("ENCODED_TEXT_CLASSES")
#undef ENCODED_TEXT_CLASSES
#pragma push_macro("FLAVOR_MAP_KEY")
#undef FLAVOR_MAP_KEY
#pragma push_macro("HTML_TEXT_BASE_TYPE")
#undef HTML_TEXT_BASE_TYPE
#pragma push_macro("TEXT_PLAIN_BASE_TYPE")
#undef TEXT_PLAIN_BASE_TYPE
#pragma push_macro("UNICODE_TEXT_CLASSES")
#undef UNICODE_TEXT_CLASSES

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class FlavorMap;
			class SystemFlavorMap$SoftCache;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class LinkedHashSet;
		class List;
		class Map;
		class Set;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $import SystemFlavorMap : public ::java::awt::datatransfer::FlavorTable {
	$class(SystemFlavorMap, 0, ::java::awt::datatransfer::FlavorTable)
public:
	SystemFlavorMap();
	void init$();
	void addFlavorForUnencodedNative($String* nat, ::java::awt::datatransfer::DataFlavor* flav);
	void addUnencodedNativeForFlavor(::java::awt::datatransfer::DataFlavor* flav, $String* nat);
	static ::java::util::Set* convertMimeTypeToDataFlavors($String* baseType);
	static ::java::awt::datatransfer::DataFlavor* decodeDataFlavor($String* nat);
	static $String* decodeJavaMIMEType($String* nat);
	static $String* encodeDataFlavor(::java::awt::datatransfer::DataFlavor* flav);
	static $String* encodeJavaMIMEType($String* mimeType);
	::java::util::LinkedHashSet* flavorToNativeLookup(::java::awt::datatransfer::DataFlavor* flav, bool synthesize);
	static ::java::awt::datatransfer::FlavorMap* getDefaultFlavorMap();
	::java::util::Map* getFlavorToNative();
	virtual ::java::util::List* getFlavorsForNative($String* nat) override;
	virtual ::java::util::Map* getFlavorsForNatives($StringArray* natives) override;
	::java::util::Map* getNativeToFlavor();
	virtual ::java::util::List* getNativesForFlavor(::java::awt::datatransfer::DataFlavor* flav) override;
	virtual ::java::util::Map* getNativesForFlavors($Array<::java::awt::datatransfer::DataFlavor>* flavors) override;
	::java::util::Map* getTextTypeToNative();
	static ::java::util::LinkedHashSet* handleHtmlMimeTypes($String* baseType, $String* mimeType);
	void initSystemFlavorMap();
	static bool isJavaMIMEType($String* str);
	static ::java::io::InputStream* lambda$initSystemFlavorMap$0();
	static $String* loadConvert($String* theString);
	::java::util::LinkedHashSet* nativeToFlavorLookup($String* nat);
	void setFlavorsForNative($String* nat, $Array<::java::awt::datatransfer::DataFlavor>* flavors);
	void setNativesForFlavor(::java::awt::datatransfer::DataFlavor* flav, $StringArray* natives);
	void store(Object$* hashed, Object$* listed, ::java::util::Map* map);
	static $String* JavaMIME;
	static $Object* FLAVOR_MAP_KEY;
	static $StringArray* UNICODE_TEXT_CLASSES;
	static $StringArray* ENCODED_TEXT_CLASSES;
	static $String* TEXT_PLAIN_BASE_TYPE;
	static $String* HTML_TEXT_BASE_TYPE;
	::java::util::Map* nativeToFlavor = nullptr;
	::java::util::Map* flavorToNative = nullptr;
	::java::util::Map* textTypeToNative = nullptr;
	bool isMapInitialized = false;
	::java::awt::datatransfer::SystemFlavorMap$SoftCache* nativesForFlavorCache = nullptr;
	::java::awt::datatransfer::SystemFlavorMap$SoftCache* flavorsForNativeCache = nullptr;
	::java::util::Set* disabledMappingGenerationKeys = nullptr;
	static $StringArray* htmlDocumentTypes;
};

		} // datatransfer
	} // awt
} // java

#pragma pop_macro("ENCODED_TEXT_CLASSES")
#pragma pop_macro("FLAVOR_MAP_KEY")
#pragma pop_macro("HTML_TEXT_BASE_TYPE")
#pragma pop_macro("TEXT_PLAIN_BASE_TYPE")
#pragma pop_macro("UNICODE_TEXT_CLASSES")

#endif // _java_awt_datatransfer_SystemFlavorMap_h_