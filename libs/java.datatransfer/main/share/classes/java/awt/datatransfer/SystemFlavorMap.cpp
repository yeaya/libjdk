#include <java/awt/datatransfer/SystemFlavorMap.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/MimeType.h>
#include <java/awt/datatransfer/MimeTypeParseException.h>
#include <java/awt/datatransfer/SystemFlavorMap$SoftCache.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Supplier.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <sun/datatransfer/DesktopDatatransferService.h>
#include <jcpp.h>

#undef ENCODED_TEXT_CLASSES
#undef FLAVOR_MAP_KEY
#undef HTML_TEXT_BASE_TYPE
#undef TEXT_PLAIN_BASE_TYPE
#undef UNICODE_TEXT_CLASSES

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $MimeType = ::java::awt::datatransfer::MimeType;
using $MimeTypeParseException = ::java::awt::datatransfer::MimeTypeParseException;
using $SystemFlavorMap$SoftCache = ::java::awt::datatransfer::SystemFlavorMap$SoftCache;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Supplier = ::java::util::function::Supplier;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;
using $DesktopDatatransferService = ::sun::datatransfer::DesktopDatatransferService;

namespace java {
	namespace awt {
		namespace datatransfer {

class SystemFlavorMap$$Lambda$SystemFlavorMap : public $Supplier {
	$class(SystemFlavorMap$$Lambda$SystemFlavorMap, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new(SystemFlavorMap));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SystemFlavorMap$$Lambda$SystemFlavorMap>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SystemFlavorMap$$Lambda$SystemFlavorMap::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SystemFlavorMap$$Lambda$SystemFlavorMap, init$, void)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SystemFlavorMap$$Lambda$SystemFlavorMap, get, $Object*)},
	{}
};
$ClassInfo SystemFlavorMap$$Lambda$SystemFlavorMap::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.datatransfer.SystemFlavorMap$$Lambda$SystemFlavorMap",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* SystemFlavorMap$$Lambda$SystemFlavorMap::load$($String* name, bool initialize) {
	$loadClass(SystemFlavorMap$$Lambda$SystemFlavorMap, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SystemFlavorMap$$Lambda$SystemFlavorMap::class$ = nullptr;

class SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1 : public $PrivilegedAction {
	$class(SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(SystemFlavorMap::lambda$initSystemFlavorMap$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1, run, $Object*)},
	{}
};
$ClassInfo SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.datatransfer.SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1::load$($String* name, bool initialize) {
	$loadClass(SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1::class$ = nullptr;

$FieldInfo _SystemFlavorMap_FieldInfo_[] = {
	{"JavaMIME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SystemFlavorMap, JavaMIME)},
	{"FLAVOR_MAP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemFlavorMap, FLAVOR_MAP_KEY)},
	{"UNICODE_TEXT_CLASSES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemFlavorMap, UNICODE_TEXT_CLASSES)},
	{"ENCODED_TEXT_CLASSES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemFlavorMap, ENCODED_TEXT_CLASSES)},
	{"TEXT_PLAIN_BASE_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemFlavorMap, TEXT_PLAIN_BASE_TYPE)},
	{"HTML_TEXT_BASE_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemFlavorMap, HTML_TEXT_BASE_TYPE)},
	{"nativeToFlavor", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;>;", $PRIVATE | $FINAL, $field(SystemFlavorMap, nativeToFlavor)},
	{"flavorToNative", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/util/LinkedHashSet<Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(SystemFlavorMap, flavorToNative)},
	{"textTypeToNative", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/LinkedHashSet<Ljava/lang/String;>;>;", $PRIVATE, $field(SystemFlavorMap, textTypeToNative)},
	{"isMapInitialized", "Z", nullptr, $PRIVATE, $field(SystemFlavorMap, isMapInitialized)},
	{"nativesForFlavorCache", "Ljava/awt/datatransfer/SystemFlavorMap$SoftCache;", "Ljava/awt/datatransfer/SystemFlavorMap$SoftCache<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(SystemFlavorMap, nativesForFlavorCache)},
	{"flavorsForNativeCache", "Ljava/awt/datatransfer/SystemFlavorMap$SoftCache;", "Ljava/awt/datatransfer/SystemFlavorMap$SoftCache<Ljava/lang/String;Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE | $FINAL, $field(SystemFlavorMap, flavorsForNativeCache)},
	{"disabledMappingGenerationKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Object;>;", $PRIVATE, $field(SystemFlavorMap, disabledMappingGenerationKeys)},
	{"htmlDocumentTypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemFlavorMap, htmlDocumentTypes)},
	{}
};

$MethodInfo _SystemFlavorMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SystemFlavorMap, init$, void)},
	{"addFlavorForUnencodedNative", "(Ljava/lang/String;Ljava/awt/datatransfer/DataFlavor;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(SystemFlavorMap, addFlavorForUnencodedNative, void, $String*, $DataFlavor*)},
	{"addUnencodedNativeForFlavor", "(Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(SystemFlavorMap, addUnencodedNativeForFlavor, void, $DataFlavor*, $String*)},
	{"convertMimeTypeToDataFlavors", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE | $STATIC, $staticMethod(SystemFlavorMap, convertMimeTypeToDataFlavors, $Set*, $String*)},
	{"decodeDataFlavor", "(Ljava/lang/String;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemFlavorMap, decodeDataFlavor, $DataFlavor*, $String*), "java.lang.ClassNotFoundException"},
	{"decodeJavaMIMEType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemFlavorMap, decodeJavaMIMEType, $String*, $String*)},
	{"encodeDataFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemFlavorMap, encodeDataFlavor, $String*, $DataFlavor*)},
	{"encodeJavaMIMEType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemFlavorMap, encodeJavaMIMEType, $String*, $String*)},
	{"flavorToNativeLookup", "(Ljava/awt/datatransfer/DataFlavor;Z)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;Z)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PRIVATE, $method(SystemFlavorMap, flavorToNativeLookup, $LinkedHashSet*, $DataFlavor*, bool)},
	{"getDefaultFlavorMap", "()Ljava/awt/datatransfer/FlavorMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemFlavorMap, getDefaultFlavorMap, $FlavorMap*)},
	{"getFlavorToNative", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/util/LinkedHashSet<Ljava/lang/String;>;>;", $PRIVATE | $SYNCHRONIZED, $method(SystemFlavorMap, getFlavorToNative, $Map*)},
	{"getFlavorsForNative", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemFlavorMap, getFlavorsForNative, $List*, $String*)},
	{"getFlavorsForNatives", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemFlavorMap, getFlavorsForNatives, $Map*, $StringArray*)},
	{"getNativeToFlavor", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;>;", $PRIVATE, $method(SystemFlavorMap, getNativeToFlavor, $Map*)},
	{"getNativesForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemFlavorMap, getNativesForFlavor, $List*, $DataFlavor*)},
	{"getNativesForFlavors", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map;", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemFlavorMap, getNativesForFlavors, $Map*, $DataFlavorArray*)},
	{"getTextTypeToNative", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/LinkedHashSet<Ljava/lang/String;>;>;", $PRIVATE | $SYNCHRONIZED, $method(SystemFlavorMap, getTextTypeToNative, $Map*)},
	{"handleHtmlMimeTypes", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(SystemFlavorMap, handleHtmlMimeTypes, $LinkedHashSet*, $String*, $String*)},
	{"initSystemFlavorMap", "()V", nullptr, $PRIVATE, $method(SystemFlavorMap, initSystemFlavorMap, void)},
	{"isJavaMIMEType", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemFlavorMap, isJavaMIMEType, bool, $String*)},
	{"lambda$initSystemFlavorMap$0", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SystemFlavorMap, lambda$initSystemFlavorMap$0, $InputStream*)},
	{"loadConvert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SystemFlavorMap, loadConvert, $String*, $String*)},
	{"nativeToFlavorLookup", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PRIVATE, $method(SystemFlavorMap, nativeToFlavorLookup, $LinkedHashSet*, $String*)},
	{"setFlavorsForNative", "(Ljava/lang/String;[Ljava/awt/datatransfer/DataFlavor;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(SystemFlavorMap, setFlavorsForNative, void, $String*, $DataFlavorArray*)},
	{"setNativesForFlavor", "(Ljava/awt/datatransfer/DataFlavor;[Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(SystemFlavorMap, setNativesForFlavor, void, $DataFlavor*, $StringArray*)},
	{"store", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Map;)V", "<H:Ljava/lang/Object;L:Ljava/lang/Object;>(TH;TL;Ljava/util/Map<TH;Ljava/util/LinkedHashSet<TL;>;>;)V", $PRIVATE, $method(SystemFlavorMap, store, void, Object$*, Object$*, $Map*)},
	{}
};

$InnerClassInfo _SystemFlavorMap_InnerClassesInfo_[] = {
	{"java.awt.datatransfer.SystemFlavorMap$SoftCache", "java.awt.datatransfer.SystemFlavorMap", "SoftCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SystemFlavorMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.datatransfer.SystemFlavorMap",
	"java.lang.Object",
	"java.awt.datatransfer.FlavorTable",
	_SystemFlavorMap_FieldInfo_,
	_SystemFlavorMap_MethodInfo_,
	nullptr,
	nullptr,
	_SystemFlavorMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.datatransfer.SystemFlavorMap$SoftCache"
};

$Object* allocate$SystemFlavorMap($Class* clazz) {
	return $of($alloc(SystemFlavorMap));
}

$String* SystemFlavorMap::JavaMIME = nullptr;
$Object* SystemFlavorMap::FLAVOR_MAP_KEY = nullptr;
$StringArray* SystemFlavorMap::UNICODE_TEXT_CLASSES = nullptr;
$StringArray* SystemFlavorMap::ENCODED_TEXT_CLASSES = nullptr;
$String* SystemFlavorMap::TEXT_PLAIN_BASE_TYPE = nullptr;
$String* SystemFlavorMap::HTML_TEXT_BASE_TYPE = nullptr;
$StringArray* SystemFlavorMap::htmlDocumentTypes = nullptr;

$Map* SystemFlavorMap::getNativeToFlavor() {
	if (!this->isMapInitialized) {
		initSystemFlavorMap();
	}
	return this->nativeToFlavor;
}

$Map* SystemFlavorMap::getFlavorToNative() {
	$synchronized(this) {
		if (!this->isMapInitialized) {
			initSystemFlavorMap();
		}
		return this->flavorToNative;
	}
}

$Map* SystemFlavorMap::getTextTypeToNative() {
	$synchronized(this) {
		if (!this->isMapInitialized) {
			initSystemFlavorMap();
			$set(this, textTypeToNative, $Collections::unmodifiableMap(this->textTypeToNative));
		}
		return this->textTypeToNative;
	}
}

$FlavorMap* SystemFlavorMap::getDefaultFlavorMap() {
	$init(SystemFlavorMap);
	$useLocalCurrentObjectStackCache();
	return $nc($($DataFlavorUtil::getDesktopService()))->getFlavorMap(static_cast<$Supplier*>($$new(SystemFlavorMap$$Lambda$SystemFlavorMap)));
}

void SystemFlavorMap::init$() {
	$set(this, nativeToFlavor, $new($HashMap));
	$set(this, flavorToNative, $new($HashMap));
	$set(this, textTypeToNative, $new($HashMap));
	this->isMapInitialized = false;
	$set(this, nativesForFlavorCache, $new($SystemFlavorMap$SoftCache));
	$set(this, flavorsForNativeCache, $new($SystemFlavorMap$SoftCache));
	$set(this, disabledMappingGenerationKeys, $new($HashSet));
}

void SystemFlavorMap::initSystemFlavorMap() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->isMapInitialized) {
		return;
	}
	this->isMapInitialized = true;
	$var($InputStream, is, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1)))));
	if (is == nullptr) {
		$throwNew($InternalError, "Default flavor mapping not found"_s);
	}
	try {
		$var($InputStreamReader, isr, $new($InputStreamReader, is));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($BufferedReader, reader, $new($BufferedReader, isr));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($String, line, nullptr);
								while (($assign(line, reader->readLine())) != nullptr) {
									$assign(line, $nc(line)->trim());
									bool var$2 = line->startsWith("#"_s);
									if (var$2 || line->isEmpty()) {
										continue;
									}
									while (line->endsWith("\\"_s)) {
										$var($String, var$3, $(line->substring(0, line->length() - 1)));
										$assign(line, $concat(var$3, $($nc($(reader->readLine()))->trim())));
									}
									int32_t delimiterPosition = line->indexOf((int32_t)u'=');
									$var($String, key, $(line->substring(0, delimiterPosition))->replace(static_cast<$CharSequence*>("\\ "_s), static_cast<$CharSequence*>(" "_s)));
									$var($StringArray, values, $(line->substring(delimiterPosition + 1, line->length()))->split(","_s));
									{
										$var($StringArray, arr$, values);
										int32_t len$ = arr$->length;
										int32_t i$ = 0;
										for (; i$ < len$; ++i$) {
											$var($String, value, arr$->get(i$));
											{
												try {
													$assign(value, loadConvert(value));
													$var($MimeType, mime, $new($MimeType, value));
													if ("text"_s->equals($(mime->getPrimaryType()))) {
														$var($String, charset, mime->getParameter("charset"_s));
														if ($DataFlavorUtil::doesSubtypeSupportCharset($(mime->getSubType()), charset)) {
															$var($DesktopDatatransferService, desktopService, $DataFlavorUtil::getDesktopService());
															if ($nc(desktopService)->isDesktopPresent()) {
																$var($String, var$4, key);
																$var($String, var$5, charset);
																$var($String, var$6, mime->getParameter("eoln"_s));
																desktopService->registerTextFlavorProperties(var$4, var$5, var$6, $(mime->getParameter("terminators"_s)));
															}
														}
														mime->removeParameter("charset"_s);
														mime->removeParameter("class"_s);
														mime->removeParameter("eoln"_s);
														mime->removeParameter("terminators"_s);
														$assign(value, mime->toString());
													}
												} catch ($MimeTypeParseException& e) {
													e->printStackTrace();
													continue;
												}
												$var($DataFlavor, flavor, nullptr);
												try {
													$assign(flavor, $new($DataFlavor, value));
												} catch ($Exception& e) {
													try {
														$assign(flavor, $new($DataFlavor, value, ($String*)nullptr));
													} catch ($Exception& ee) {
														ee->printStackTrace();
														continue;
													}
												}
												$var($LinkedHashSet, dfs, $new($LinkedHashSet));
												dfs->add(flavor);
												if ("text"_s->equals($($nc(flavor)->getPrimaryType()))) {
													dfs->addAll($(convertMimeTypeToDataFlavors(value)));
													$var($Object, var$7, $of($nc($nc(flavor)->mimeType)->getBaseType()));
													$var($Object, var$8, $of(key));
													store(var$7, var$8, $(getTextTypeToNative()));
												}
												{
													$var($Iterator, i$, dfs->iterator());
													for (; $nc(i$)->hasNext();) {
														$var($DataFlavor, df, $cast($DataFlavor, i$->next()));
														{
															store(df, key, $(getFlavorToNative()));
															store(key, df, $(getNativeToFlavor()));
														}
													}
												}
											}
										}
									}
								}
							} catch ($Throwable& t$) {
								try {
									reader->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$9) {
							$assign(var$1, var$9);
						} /*finally*/ {
							reader->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						isr->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$10) {
				$assign(var$0, var$10);
			} /*finally*/ {
				isr->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
		$throwNew($InternalError, "Error reading default flavor mapping"_s, e);
	}
}

$String* SystemFlavorMap::loadConvert($String* theString) {
	$init(SystemFlavorMap);
	char16_t aChar = 0;
	int32_t len = $nc(theString)->length();
	$var($StringBuilder, outBuffer, $new($StringBuilder, len));
	for (int32_t x = 0; x < len;) {
		aChar = theString->charAt(x++);
		if (aChar == u'\\') {
			aChar = theString->charAt(x++);
			if (aChar == u'u') {
				int32_t value = 0;
				for (int32_t i = 0; i < 4; ++i) {
					aChar = theString->charAt(x++);
					switch (aChar) {
					case u'0':
						{}
					case u'1':
						{}
					case u'2':
						{}
					case u'3':
						{}
					case u'4':
						{}
					case u'5':
						{}
					case u'6':
						{}
					case u'7':
						{}
					case u'8':
						{}
					case u'9':
						{
							{
								value = (value << 4) + aChar - u'0';
								break;
							}
						}
					case u'a':
						{}
					case u'b':
						{}
					case u'c':
						{}
					case u'd':
						{}
					case u'e':
						{}
					case u'f':
						{
							{
								value = (value << 4) + 10 + aChar - u'a';
								break;
							}
						}
					case u'A':
						{}
					case u'B':
						{}
					case u'C':
						{}
					case u'D':
						{}
					case u'E':
						{}
					case u'F':
						{
							{
								value = (value << 4) + 10 + aChar - u'A';
								break;
							}
						}
					default:
						{
							{
								$throwNew($IllegalArgumentException, "Malformed \\uxxxx encoding."_s);
							}
						}
					}
				}
				outBuffer->append((char16_t)value);
			} else {
				if (aChar == u't') {
					aChar = u'\t';
				} else if (aChar == u'r') {
					aChar = u'\r';
				} else if (aChar == u'n') {
					aChar = u'\n';
				} else if (aChar == u'f') {
					aChar = u'\f';
				}
				outBuffer->append(aChar);
			}
		} else {
			outBuffer->append(aChar);
		}
	}
	return outBuffer->toString();
}

void SystemFlavorMap::store(Object$* hashed, Object$* listed, $Map* map) {
	$var($LinkedHashSet, list, $cast($LinkedHashSet, $nc(map)->get(hashed)));
	if (list == nullptr) {
		$assign(list, $new($LinkedHashSet, 1));
		map->put(hashed, list);
	}
	if (!$nc(list)->contains(listed)) {
		list->add(listed);
	}
}

$LinkedHashSet* SystemFlavorMap::nativeToFlavorLookup($String* nat) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedHashSet, flavors, $cast($LinkedHashSet, $nc($(getNativeToFlavor()))->get(nat)));
	if (nat != nullptr && !$nc(this->disabledMappingGenerationKeys)->contains(nat)) {
		$var($DesktopDatatransferService, desktopService, $DataFlavorUtil::getDesktopService());
		if ($nc(desktopService)->isDesktopPresent()) {
			$var($LinkedHashSet, platformFlavors, desktopService->getPlatformMappingsForNative(nat));
			if (!$nc(platformFlavors)->isEmpty()) {
				if (flavors != nullptr) {
					platformFlavors->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(flavors)))));
				}
				$assign(flavors, platformFlavors);
			}
		}
	}
	if (flavors == nullptr && isJavaMIMEType(nat)) {
		$var($String, decoded, decodeJavaMIMEType(nat));
		$var($DataFlavor, flavor, nullptr);
		try {
			$assign(flavor, $new($DataFlavor, decoded));
		} catch ($Exception& e) {
			$var($String, var$2, $$str({"Exception \""_s, $($of(e)->getClass()->getName()), ": "_s}));
			$var($String, var$1, $$concat(var$2, $(e->getMessage())));
			$var($String, var$0, $$concat(var$1, "\"while constructing DataFlavor for: "_s));
			$nc($System::err)->println($$concat(var$0, decoded));
		}
		if (flavor != nullptr) {
			$assign(flavors, $new($LinkedHashSet, 1));
			$nc($(getNativeToFlavor()))->put(nat, flavors);
			flavors->add(flavor);
			$nc(this->flavorsForNativeCache)->remove(nat);
			$var($LinkedHashSet, natives, $cast($LinkedHashSet, $nc($(getFlavorToNative()))->get(flavor)));
			if (natives == nullptr) {
				$assign(natives, $new($LinkedHashSet, 1));
				$nc($(getFlavorToNative()))->put(flavor, natives);
			}
			$nc(natives)->add(nat);
			$nc(this->nativesForFlavorCache)->remove(flavor);
		}
	}
	return (flavors != nullptr) ? flavors : $new($LinkedHashSet, 0);
}

$LinkedHashSet* SystemFlavorMap::flavorToNativeLookup($DataFlavor* flav, bool synthesize) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedHashSet, natives, $cast($LinkedHashSet, $nc($(getFlavorToNative()))->get(flav)));
	if (flav != nullptr && !$nc(this->disabledMappingGenerationKeys)->contains(flav)) {
		$var($DesktopDatatransferService, desktopService, $DataFlavorUtil::getDesktopService());
		if ($nc(desktopService)->isDesktopPresent()) {
			$var($LinkedHashSet, platformNatives, desktopService->getPlatformMappingsForFlavor(flav));
			if (!$nc(platformNatives)->isEmpty()) {
				if (natives != nullptr) {
					platformNatives->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(natives)))));
				}
				$assign(natives, platformNatives);
			}
		}
	}
	if (natives == nullptr) {
		if (synthesize) {
			$var($String, encoded, encodeDataFlavor(flav));
			$assign(natives, $new($LinkedHashSet, 1));
			$nc($(getFlavorToNative()))->put(flav, natives);
			natives->add(encoded);
			$var($LinkedHashSet, flavors, $cast($LinkedHashSet, $nc($(getNativeToFlavor()))->get(encoded)));
			if (flavors == nullptr) {
				$assign(flavors, $new($LinkedHashSet, 1));
				$nc($(getNativeToFlavor()))->put(encoded, flavors);
			}
			$nc(flavors)->add(flav);
			$nc(this->nativesForFlavorCache)->remove(flav);
			$nc(this->flavorsForNativeCache)->remove(encoded);
		} else {
			$assign(natives, $new($LinkedHashSet, 0));
		}
	}
	return $new($LinkedHashSet, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(natives)))));
}

$List* SystemFlavorMap::getNativesForFlavor($DataFlavor* flav) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($LinkedHashSet, retval, $nc(this->nativesForFlavorCache)->check(flav));
		if (retval != nullptr) {
			return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(retval)))));
		}
		if (flav == nullptr) {
			$assign(retval, $new($LinkedHashSet, $(static_cast<$Collection*>($nc($(getNativeToFlavor()))->keySet()))));
		} else if ($nc(this->disabledMappingGenerationKeys)->contains(flav)) {
			$assign(retval, flavorToNativeLookup(flav, false));
		} else if ($DataFlavorUtil::isFlavorCharsetTextType(flav)) {
			$assign(retval, $new($LinkedHashSet, 0));
			if ("text"_s->equals($($nc(flav)->getPrimaryType()))) {
				$var($LinkedHashSet, textTypeNatives, $cast($LinkedHashSet, $nc($(getTextTypeToNative()))->get($($nc($nc(flav)->mimeType)->getBaseType()))));
				if (textTypeNatives != nullptr) {
					retval->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(textTypeNatives)))));
				}
			}
			$var($LinkedHashSet, textTypeNatives, $cast($LinkedHashSet, $nc($(getTextTypeToNative()))->get(SystemFlavorMap::TEXT_PLAIN_BASE_TYPE)));
			if (textTypeNatives != nullptr) {
				retval->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(textTypeNatives)))));
			}
			if (retval->isEmpty()) {
				$assign(retval, flavorToNativeLookup(flav, true));
			} else {
				retval->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(flavorToNativeLookup(flav, false)))))));
			}
		} else if ($DataFlavorUtil::isFlavorNoncharsetTextType(flav)) {
			$assign(retval, $cast($LinkedHashSet, $nc($(getTextTypeToNative()))->get($($nc($nc(flav)->mimeType)->getBaseType()))));
			if (retval == nullptr || $nc(retval)->isEmpty()) {
				$assign(retval, flavorToNativeLookup(flav, true));
			} else {
				retval->addAll($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(flavorToNativeLookup(flav, false)))))));
			}
		} else {
			$assign(retval, flavorToNativeLookup(flav, true));
		}
		$nc(this->nativesForFlavorCache)->put(flav, retval);
		return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(retval)))));
	}
}

$List* SystemFlavorMap::getFlavorsForNative($String* nat) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($LinkedHashSet, returnValue, $nc(this->flavorsForNativeCache)->check(nat));
		if (returnValue != nullptr) {
			return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(returnValue)))));
		} else {
			$assign(returnValue, $new($LinkedHashSet));
		}
		if (nat == nullptr) {
			{
				$var($Iterator, i$, $nc($(getNativesForFlavor(nullptr)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, n, $cast($String, i$->next()));
					{
						$nc(returnValue)->addAll($(getFlavorsForNative(n)));
					}
				}
			}
		} else {
			$var($LinkedHashSet, flavors, nativeToFlavorLookup(nat));
			if ($nc(this->disabledMappingGenerationKeys)->contains(nat)) {
				return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(flavors)))));
			}
			$var($LinkedHashSet, flavorsWithSynthesized, nativeToFlavorLookup(nat));
			{
				$var($Iterator, i$, $nc(flavorsWithSynthesized)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($DataFlavor, df, $cast($DataFlavor, i$->next()));
					{
						$nc(returnValue)->add(df);
						if ("text"_s->equals($($nc(df)->getPrimaryType()))) {
							$var($String, baseType, $nc($nc(df)->mimeType)->getBaseType());
							returnValue->addAll($(convertMimeTypeToDataFlavors(baseType)));
						}
					}
				}
			}
		}
		$nc(this->flavorsForNativeCache)->put(nat, returnValue);
		return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(returnValue)))));
	}
}

$Set* SystemFlavorMap::convertMimeTypeToDataFlavors($String* baseType) {
	$init(SystemFlavorMap);
	$useLocalCurrentObjectStackCache();
	$var($Set, returnValue, $new($LinkedHashSet));
	$var($String, subType, nullptr);
	try {
		$var($MimeType, mimeType, $new($MimeType, baseType));
		$assign(subType, mimeType->getSubType());
	} catch ($MimeTypeParseException& mtpe) {
	}
	if ($DataFlavorUtil::doesSubtypeSupportCharset(subType, nullptr)) {
		if ($nc(SystemFlavorMap::TEXT_PLAIN_BASE_TYPE)->equals(baseType)) {
			$init($DataFlavor);
			returnValue->add($DataFlavor::stringFlavor);
		}
		{
			$var($StringArray, arr$, SystemFlavorMap::UNICODE_TEXT_CLASSES);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, unicodeClassName, arr$->get(i$));
				{
					$var($String, mimeType, $str({baseType, ";charset=Unicode;class="_s, unicodeClassName}));
					$var($LinkedHashSet, mimeTypes, handleHtmlMimeTypes(baseType, mimeType));
					{
						$var($Iterator, i$, $nc(mimeTypes)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, mt, $cast($String, i$->next()));
							{
								$var($DataFlavor, toAdd, nullptr);
								try {
									$assign(toAdd, $new($DataFlavor, mt));
								} catch ($ClassNotFoundException& cannotHappen) {
								}
								returnValue->add(toAdd);
							}
						}
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($DataFlavorUtil::standardEncodings()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, charset, $cast($String, i$->next()));
				{
					{
						$var($StringArray, arr$, SystemFlavorMap::ENCODED_TEXT_CLASSES);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, encodedTextClass, arr$->get(i$));
							{
								$var($String, mimeType, $str({baseType, ";charset="_s, charset, ";class="_s, encodedTextClass}));
								$var($LinkedHashSet, mimeTypes, handleHtmlMimeTypes(baseType, mimeType));
								{
									$var($Iterator, i$, $nc(mimeTypes)->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($String, mt, $cast($String, i$->next()));
										{
											$var($DataFlavor, df, nullptr);
											try {
												$assign(df, $new($DataFlavor, mt));
												$init($DataFlavor);
												if (df->equals($DataFlavor::plainTextFlavor)) {
													$assign(df, $DataFlavor::plainTextFlavor);
												}
											} catch ($ClassNotFoundException& cannotHappen) {
											}
											returnValue->add(df);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if ($nc(SystemFlavorMap::TEXT_PLAIN_BASE_TYPE)->equals(baseType)) {
			$init($DataFlavor);
			returnValue->add($DataFlavor::plainTextFlavor);
		}
	} else {
		{
			$var($StringArray, arr$, SystemFlavorMap::ENCODED_TEXT_CLASSES);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, encodedTextClassName, arr$->get(i$));
				{
					$var($DataFlavor, toAdd, nullptr);
					try {
						$assign(toAdd, $new($DataFlavor, $$str({baseType, ";class="_s, encodedTextClassName})));
					} catch ($ClassNotFoundException& cannotHappen) {
					}
					returnValue->add(toAdd);
				}
			}
		}
	}
	return returnValue;
}

$LinkedHashSet* SystemFlavorMap::handleHtmlMimeTypes($String* baseType, $String* mimeType) {
	$init(SystemFlavorMap);
	$useLocalCurrentObjectStackCache();
	$var($LinkedHashSet, returnValues, $new($LinkedHashSet));
	if ($nc(SystemFlavorMap::HTML_TEXT_BASE_TYPE)->equals(baseType)) {
		{
			$var($StringArray, arr$, SystemFlavorMap::htmlDocumentTypes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, documentType, arr$->get(i$));
				{
					returnValues->add($$str({mimeType, ";document="_s, documentType}));
				}
			}
		}
	} else {
		returnValues->add(mimeType);
	}
	return returnValues;
}

$Map* SystemFlavorMap::getNativesForFlavors($DataFlavorArray* flavors$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($DataFlavorArray, flavors, flavors$renamed);
		if (flavors == nullptr) {
			$var($List, flavor_list, getFlavorsForNative(nullptr));
			$assign(flavors, $new($DataFlavorArray, $nc(flavor_list)->size()));
			flavor_list->toArray(flavors);
		}
		$var($Map, retval, $new($HashMap, $nc(flavors)->length, 1.0f));
		{
			$var($DataFlavorArray, arr$, flavors);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DataFlavor, flavor, arr$->get(i$));
				{
					$var($List, natives, getNativesForFlavor(flavor));
					$var($String, nat, ($nc(natives)->isEmpty()) ? ($String*)nullptr : $cast($String, $nc(natives)->get(0)));
					retval->put(flavor, nat);
				}
			}
		}
		return retval;
	}
}

$Map* SystemFlavorMap::getFlavorsForNatives($StringArray* natives$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringArray, natives, natives$renamed);
		if (natives == nullptr) {
			$var($List, nativesList, getNativesForFlavor(nullptr));
			$assign(natives, $new($StringArray, $nc(nativesList)->size()));
			nativesList->toArray(natives);
		}
		$var($Map, retval, $new($HashMap, $nc(natives)->length, 1.0f));
		{
			$var($StringArray, arr$, natives);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, aNative, arr$->get(i$));
				{
					$var($List, flavors, getFlavorsForNative(aNative));
					$var($DataFlavor, flav, ($nc(flavors)->isEmpty()) ? ($DataFlavor*)nullptr : $cast($DataFlavor, $nc(flavors)->get(0)));
					retval->put(aNative, flav);
				}
			}
		}
		return retval;
	}
}

void SystemFlavorMap::addUnencodedNativeForFlavor($DataFlavor* flav, $String* nat) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Objects::requireNonNull($of(nat), "Null native not permitted"_s);
		$Objects::requireNonNull($of(flav), "Null flavor not permitted"_s);
		$var($LinkedHashSet, natives, $cast($LinkedHashSet, $nc($(getFlavorToNative()))->get(flav)));
		if (natives == nullptr) {
			$assign(natives, $new($LinkedHashSet, 1));
			$nc($(getFlavorToNative()))->put(flav, natives);
		}
		$nc(natives)->add(nat);
		$nc(this->nativesForFlavorCache)->remove(flav);
	}
}

void SystemFlavorMap::setNativesForFlavor($DataFlavor* flav, $StringArray* natives) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Objects::requireNonNull($of(natives), "Null natives not permitted"_s);
		$Objects::requireNonNull($of(flav), "Null flavors not permitted"_s);
		$nc($(getFlavorToNative()))->remove(flav);
		{
			$var($StringArray, arr$, natives);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, aNative, arr$->get(i$));
				{
					addUnencodedNativeForFlavor(flav, aNative);
				}
			}
		}
		$nc(this->disabledMappingGenerationKeys)->add(flav);
		$nc(this->nativesForFlavorCache)->remove(flav);
	}
}

void SystemFlavorMap::addFlavorForUnencodedNative($String* nat, $DataFlavor* flav) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Objects::requireNonNull($of(nat), "Null native not permitted"_s);
		$Objects::requireNonNull($of(flav), "Null flavor not permitted"_s);
		$var($LinkedHashSet, flavors, $cast($LinkedHashSet, $nc($(getNativeToFlavor()))->get(nat)));
		if (flavors == nullptr) {
			$assign(flavors, $new($LinkedHashSet, 1));
			$nc($(getNativeToFlavor()))->put(nat, flavors);
		}
		$nc(flavors)->add(flav);
		$nc(this->flavorsForNativeCache)->remove(nat);
	}
}

void SystemFlavorMap::setFlavorsForNative($String* nat, $DataFlavorArray* flavors) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Objects::requireNonNull($of(nat), "Null native not permitted"_s);
		$Objects::requireNonNull($of(flavors), "Null flavors not permitted"_s);
		$nc($(getNativeToFlavor()))->remove(nat);
		{
			$var($DataFlavorArray, arr$, flavors);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DataFlavor, flavor, arr$->get(i$));
				{
					addFlavorForUnencodedNative(nat, flavor);
				}
			}
		}
		$nc(this->disabledMappingGenerationKeys)->add(nat);
		$nc(this->flavorsForNativeCache)->remove(nat);
	}
}

$String* SystemFlavorMap::encodeJavaMIMEType($String* mimeType) {
	$init(SystemFlavorMap);
	return (mimeType != nullptr) ? $str({SystemFlavorMap::JavaMIME, mimeType}) : ($String*)nullptr;
}

$String* SystemFlavorMap::encodeDataFlavor($DataFlavor* flav) {
	$init(SystemFlavorMap);
	return (flav != nullptr) ? SystemFlavorMap::encodeJavaMIMEType($($nc(flav)->getMimeType())) : ($String*)nullptr;
}

bool SystemFlavorMap::isJavaMIMEType($String* str) {
	$init(SystemFlavorMap);
	return (str != nullptr && str->startsWith(SystemFlavorMap::JavaMIME, 0));
}

$String* SystemFlavorMap::decodeJavaMIMEType($String* nat) {
	$init(SystemFlavorMap);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, nullptr);
	if (isJavaMIMEType(nat)) {
		int32_t var$1 = $nc(SystemFlavorMap::JavaMIME)->length();
		$assign(var$0, $($nc(nat)->substring(var$1, nat->length()))->trim());
	} else {
		$assign(var$0, nullptr);
	}
	return var$0;
}

$DataFlavor* SystemFlavorMap::decodeDataFlavor($String* nat) {
	$init(SystemFlavorMap);
	$var($String, retval_str, SystemFlavorMap::decodeJavaMIMEType(nat));
	return (retval_str != nullptr) ? $new($DataFlavor, retval_str) : ($DataFlavor*)nullptr;
}

$InputStream* SystemFlavorMap::lambda$initSystemFlavorMap$0() {
	$init(SystemFlavorMap);
	$beforeCallerSensitive();
	return SystemFlavorMap::class$->getResourceAsStream("/sun/datatransfer/resources/flavormap.properties"_s);
}

void clinit$SystemFlavorMap($Class* class$) {
	$assignStatic(SystemFlavorMap::TEXT_PLAIN_BASE_TYPE, "text/plain"_s);
	$assignStatic(SystemFlavorMap::HTML_TEXT_BASE_TYPE, "text/html"_s);
	$assignStatic(SystemFlavorMap::JavaMIME, "JAVA_DATAFLAVOR:"_s);
	$assignStatic(SystemFlavorMap::FLAVOR_MAP_KEY, $new($Object));
	$assignStatic(SystemFlavorMap::UNICODE_TEXT_CLASSES, $new($StringArray, {
		"java.io.Reader"_s,
		"java.lang.String"_s,
		"java.nio.CharBuffer"_s,
		"\"[C\""_s
	}));
	$assignStatic(SystemFlavorMap::ENCODED_TEXT_CLASSES, $new($StringArray, {
		"java.io.InputStream"_s,
		"java.nio.ByteBuffer"_s,
		"\"[B\""_s
	}));
	$assignStatic(SystemFlavorMap::htmlDocumentTypes, $new($StringArray, {
		"all"_s,
		"selection"_s,
		"fragment"_s
	}));
}

SystemFlavorMap::SystemFlavorMap() {
}

$Class* SystemFlavorMap::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SystemFlavorMap$$Lambda$SystemFlavorMap::classInfo$.name)) {
			return SystemFlavorMap$$Lambda$SystemFlavorMap::load$(name, initialize);
		}
		if (name->equals(SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1::classInfo$.name)) {
			return SystemFlavorMap$$Lambda$lambda$initSystemFlavorMap$0$1::load$(name, initialize);
		}
	}
	$loadClass(SystemFlavorMap, name, initialize, &_SystemFlavorMap_ClassInfo_, clinit$SystemFlavorMap, allocate$SystemFlavorMap);
	return class$;
}

$Class* SystemFlavorMap::class$ = nullptr;

		} // datatransfer
	} // awt
} // java