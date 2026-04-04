#include <sun/print/CUPSPrinter.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <sun/print/AttributeClass.h>
#include <sun/print/CUPSPrinter$1.h>
#include <sun/print/CUPSPrinter$2.h>
#include <sun/print/CUPSPrinter$3.h>
#include <sun/print/CustomMediaSizeName.h>
#include <sun/print/CustomMediaTray.h>
#include <sun/print/IPPPrintService.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

#undef ATTRIBUTES_CHARSET
#undef ATTRIBUTES_NATURAL_LANGUAGE
#undef INCH
#undef OP_CUPS_GET_DEFAULT
#undef OP_CUPS_GET_PRINTERS
#undef PRINTER_DPI
#undef TAG_KEYWORD
#undef TAG_URI

using $HashMapArray = $Array<::java::util::HashMap>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $AttributeClassArray = $Array<::sun::print::AttributeClass>;
using $CustomMediaSizeNameArray = $Array<::sun::print::CustomMediaSizeName>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;
using $AttributeClass = ::sun::print::AttributeClass;
using $CUPSPrinter$1 = ::sun::print::CUPSPrinter$1;
using $CUPSPrinter$2 = ::sun::print::CUPSPrinter$2;
using $CUPSPrinter$3 = ::sun::print::CUPSPrinter$3;
using $CustomMediaSizeName = ::sun::print::CustomMediaSizeName;
using $CustomMediaTray = ::sun::print::CustomMediaTray;
using $IPPPrintService = ::sun::print::IPPPrintService;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

bool CUPSPrinter::$assertionsDisabled = false;
$String* CUPSPrinter::debugPrefix = nullptr;
double CUPSPrinter::PRINTER_DPI = 0.0;
bool CUPSPrinter::libFound = false;
$String* CUPSPrinter::cupsServer = nullptr;
int32_t CUPSPrinter::cupsPort = 0;

$String* CUPSPrinter::getCupsServer() {
	$init(CUPSPrinter);
	$prepareNativeStatic(getCupsServer, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

int32_t CUPSPrinter::getCupsPort() {
	$init(CUPSPrinter);
	$prepareNativeStatic(getCupsPort, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$String* CUPSPrinter::getCupsDefaultPrinter() {
	$init(CUPSPrinter);
	$prepareNativeStatic(getCupsDefaultPrinter, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

bool CUPSPrinter::canConnect($String* server, int32_t port) {
	$init(CUPSPrinter);
	$prepareNativeStatic(canConnect, bool, $String* server, int32_t port);
	bool $ret = $invokeNativeStatic(server, port);
	$finishNativeStatic();
	return $ret;
}

bool CUPSPrinter::initIDs() {
	$init(CUPSPrinter);
	$prepareNativeStatic(initIDs, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$StringArray* CUPSPrinter::getMedia($String* printer) {
	$init(CUPSPrinter);
	$prepareNativeStatic(getMedia, $StringArray*, $String* printer);
	$var($StringArray, $ret, $invokeNativeStaticObject(printer));
	$finishNativeStatic();
	return $ret;
}

$floats* CUPSPrinter::getPageSizes($String* printer) {
	$init(CUPSPrinter);
	$prepareNativeStatic(getPageSizes, $floats*, $String* printer);
	$var($floats, $ret, $invokeNativeStaticObject(printer));
	$finishNativeStatic();
	return $ret;
}

void CUPSPrinter::getResolutions($String* printer, $ArrayList* resolutionList) {
	$init(CUPSPrinter);
	$prepareNativeStatic(getResolutions, void, $String* printer, $ArrayList* resolutionList);
	$invokeNativeStatic(printer, resolutionList);
	$finishNativeStatic();
}

void CUPSPrinter::init$($String* printerName) {
	$useLocalObjectStack();
	this->nPageSizes = 0;
	this->nTrays = 0;
	if (printerName == nullptr) {
		$throwNew($IllegalArgumentException, "null printer name"_s);
	}
	$set(this, printer, printerName);
	$set(this, cupsMediaSNames, nullptr);
	$set(this, cupsMediaPrintables, nullptr);
	$set(this, cupsMediaTrays, nullptr);
	this->initialized = false;
	if (!CUPSPrinter::libFound) {
		$throwNew($RuntimeException, "cups lib not found"_s);
	} else {
		$set(this, media, getMedia(this->printer));
		if (this->media == nullptr) {
			$throwNew($RuntimeException, "error getting PPD"_s);
		}
		$set(this, pageSizes, getPageSizes(this->printer));
		if (this->pageSizes != nullptr) {
			this->nPageSizes = this->pageSizes->length / 6;
			this->nTrays = $nc(this->media)->length / 2 - this->nPageSizes;
			if (!CUPSPrinter::$assertionsDisabled && !(this->nTrays >= 0)) {
				$throwNew($AssertionError);
			}
		}
		$var($ArrayList, resolutionList, $new($ArrayList));
		getResolutions(this->printer, resolutionList);
		$set(this, resolutionsArray, $new($ints, resolutionList->size()));
		for (int32_t i = 0; i < resolutionList->size(); ++i) {
			this->resolutionsArray->set(i, $$sure($Integer, resolutionList->get(i))->intValue());
		}
	}
}

$MediaSizeNameArray* CUPSPrinter::getMediaSizeNames() {
	initMedia();
	return this->cupsMediaSNames;
}

$CustomMediaSizeNameArray* CUPSPrinter::getCustomMediaSizeNames() {
	initMedia();
	return this->cupsCustomMediaSNames;
}

int32_t CUPSPrinter::getDefaultMediaIndex() {
	return (($nc(this->pageSizes)->length > 1) ? $cast(int32_t, (this->pageSizes->get(this->pageSizes->length - 1))) : 0);
}

$MediaPrintableAreaArray* CUPSPrinter::getMediaPrintableArea() {
	initMedia();
	return this->cupsMediaPrintables;
}

$MediaTrayArray* CUPSPrinter::getMediaTrays() {
	initMedia();
	return this->cupsMediaTrays;
}

$ints* CUPSPrinter::getRawResolutions() {
	return this->resolutionsArray;
}

void CUPSPrinter::initMedia() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->initialized) {
			return;
		} else {
			this->initialized = true;
		}
		if (this->pageSizes == nullptr) {
			return;
		}
		$set(this, cupsMediaPrintables, $new($MediaPrintableAreaArray, this->nPageSizes));
		$set(this, cupsMediaSNames, $new($MediaSizeNameArray, this->nPageSizes));
		$set(this, cupsCustomMediaSNames, $new($CustomMediaSizeNameArray, this->nPageSizes));
		$var($CustomMediaSizeName, msn, nullptr);
		$var($MediaPrintableArea, mpa, nullptr);
		float length = 0.0;
		float width = 0.0;
		float x = 0.0;
		float y = 0.0;
		float w = 0.0;
		float h = 0.0;
		for (int32_t i = 0; i < this->nPageSizes; ++i) {
			width = (float)($div($nc(this->pageSizes)->get(i * 6), CUPSPrinter::PRINTER_DPI));
			length = (float)($div(this->pageSizes->get(i * 6 + 1), CUPSPrinter::PRINTER_DPI));
			x = (float)($div(this->pageSizes->get(i * 6 + 2), CUPSPrinter::PRINTER_DPI));
			h = (float)($div(this->pageSizes->get(i * 6 + 3), CUPSPrinter::PRINTER_DPI));
			w = (float)($div(this->pageSizes->get(i * 6 + 4), CUPSPrinter::PRINTER_DPI));
			y = (float)($div(this->pageSizes->get(i * 6 + 5), CUPSPrinter::PRINTER_DPI));
			$assign(msn, $new($CustomMediaSizeName, $nc(this->media)->get(i * 2), $nc(this->media)->get(i * 2 + 1), width, length));
			if (($nc(this->cupsMediaSNames)->set(i, $(msn->getStandardMedia()))) == nullptr) {
				$nc(this->cupsMediaSNames)->set(i, msn);
				if ((width > 0.0) && (length > 0.0)) {
					try {
						$new($MediaSize, width, length, $Size2DSyntax::INCH, msn);
					} catch ($IllegalArgumentException& e) {
						$new($MediaSize, length, width, $Size2DSyntax::INCH, msn);
					}
				}
			}
			$nc(this->cupsCustomMediaSNames)->set(i, msn);
			$assign(mpa, nullptr);
			try {
				$assign(mpa, $new($MediaPrintableArea, x, y, w, h, $MediaPrintableArea::INCH));
			} catch ($IllegalArgumentException& e) {
				if (width > 0 && length > 0) {
					$assign(mpa, $new($MediaPrintableArea, (float)0, (float)0, width, length, $MediaPrintableArea::INCH));
				}
			}
			$nc(this->cupsMediaPrintables)->set(i, mpa);
		}
		$set(this, cupsMediaTrays, $new($MediaTrayArray, this->nTrays));
		$var($MediaTray, mt, nullptr);
		for (int32_t i = 0; i < this->nTrays; ++i) {
			$assign(mt, $new($CustomMediaTray, $nc(this->media)->get((this->nPageSizes + i) * 2), $nc(this->media)->get((this->nPageSizes + i) * 2 + 1)));
			this->cupsMediaTrays->set(i, mt);
		}
	}
}

$StringArray* CUPSPrinter::getDefaultPrinter() {
	$init(CUPSPrinter);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($StringArray, printerInfo, $new($StringArray, 2));
	printerInfo->set(0, $(getCupsDefaultPrinter()));
	if (printerInfo->get(0) != nullptr) {
		printerInfo->set(1, nullptr);
		return $cast($StringArray, printerInfo->clone());
	}
	try {
		$var($String, var$0, "http"_s);
		$var($String, var$1, getServer());
		$var($URL, url, $new($URL, var$0, var$1, getPort(), ""_s));
		$var($HttpURLConnection, urlConnection, $IPPPrintService::getIPPConnection(url));
		if (urlConnection != nullptr) {
			$var($OutputStream, os, $cast($OutputStream, $AccessController::doPrivileged($$new($CUPSPrinter$2, urlConnection))));
			if (os == nullptr) {
				return nullptr;
			}
			$init($AttributeClass);
			$var($AttributeClassArray, attCl, $new($AttributeClassArray, {
				$AttributeClass::ATTRIBUTES_CHARSET,
				$AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE,
				$$new($AttributeClass, "requested-attributes"_s, $AttributeClass::TAG_URI, "printer-uri"_s)
			}));
			if ($IPPPrintService::writeIPPRequest(os, $IPPPrintService::OP_CUPS_GET_DEFAULT, attCl)) {
				$var($HashMap, defaultMap, nullptr);
				$var($InputStream, is, urlConnection->getInputStream());
				$var($HashMapArray, responseMap, $IPPPrintService::readIPPResponse(is));
				$nc(is)->close();
				if (responseMap != nullptr && responseMap->length > 0) {
					$assign(defaultMap, responseMap->get(0));
				} else {
					$IPPPrintService::debug_println($$str({CUPSPrinter::debugPrefix, " empty response map for GET_DEFAULT."_s}));
				}
				if (defaultMap == nullptr) {
					$nc(os)->close();
					urlConnection->disconnect();
					if ($PrintServiceLookupProvider::isMac()) {
						printerInfo->set(0, $($PrintServiceLookupProvider::getDefaultPrinterNameSysV()));
						printerInfo->set(1, nullptr);
						return $cast($StringArray, printerInfo->clone());
					} else {
						return nullptr;
					}
				}
				$var($AttributeClass, attribClass, $cast($AttributeClass, $nc(defaultMap)->get("printer-name"_s)));
				if (attribClass != nullptr) {
					printerInfo->set(0, $(attribClass->getStringValue()));
					$assign(attribClass, $cast($AttributeClass, defaultMap->get("printer-uri-supported"_s)));
					$IPPPrintService::debug_println($$str({CUPSPrinter::debugPrefix, "printer-uri-supported="_s, attribClass}));
					if (attribClass != nullptr) {
						printerInfo->set(1, $(attribClass->getStringValue()));
					} else {
						printerInfo->set(1, nullptr);
					}
					$nc(os)->close();
					urlConnection->disconnect();
					return $cast($StringArray, printerInfo->clone());
				}
			}
			$nc(os)->close();
			urlConnection->disconnect();
		}
	} catch ($Exception& e) {
	}
	return nullptr;
}

$StringArray* CUPSPrinter::getAllPrinters() {
	$init(CUPSPrinter);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($String, var$0, "http"_s);
		$var($String, var$1, getServer());
		$var($URL, url, $new($URL, var$0, var$1, getPort(), ""_s));
		$var($HttpURLConnection, urlConnection, $IPPPrintService::getIPPConnection(url));
		if (urlConnection != nullptr) {
			$var($OutputStream, os, $cast($OutputStream, $AccessController::doPrivileged($$new($CUPSPrinter$3, urlConnection))));
			if (os == nullptr) {
				return nullptr;
			}
			$init($AttributeClass);
			$var($AttributeClassArray, attCl, $new($AttributeClassArray, {
				$AttributeClass::ATTRIBUTES_CHARSET,
				$AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE,
				$$new($AttributeClass, "requested-attributes"_s, $AttributeClass::TAG_KEYWORD, "printer-uri-supported"_s)
			}));
			if ($IPPPrintService::writeIPPRequest(os, $IPPPrintService::OP_CUPS_GET_PRINTERS, attCl)) {
				$var($InputStream, is, urlConnection->getInputStream());
				$var($HashMapArray, responseMap, $IPPPrintService::readIPPResponse(is));
				$nc(is)->close();
				$nc(os)->close();
				urlConnection->disconnect();
				if (responseMap == nullptr || responseMap->length == 0) {
					return nullptr;
				}
				$var($ArrayList, printerNames, $new($ArrayList));
				for (int32_t i = 0; i < $nc(responseMap)->length; ++i) {
					$var($AttributeClass, attribClass, $cast($AttributeClass, $nc(responseMap->get(i))->get("printer-uri-supported"_s)));
					if (attribClass != nullptr) {
						$var($String, nameStr, attribClass->getStringValue());
						printerNames->add(nameStr);
					}
				}
				return $cast($StringArray, printerNames->toArray($$new($StringArray, 0)));
			} else {
				$nc(os)->close();
				urlConnection->disconnect();
			}
		}
	} catch ($Exception& e) {
	}
	return nullptr;
}

$String* CUPSPrinter::getServer() {
	$init(CUPSPrinter);
	return CUPSPrinter::cupsServer;
}

int32_t CUPSPrinter::getPort() {
	$init(CUPSPrinter);
	return CUPSPrinter::cupsPort;
}

bool CUPSPrinter::isCupsRunning() {
	$init(CUPSPrinter);
	$useLocalObjectStack();
	$IPPPrintService::debug_println($$str({CUPSPrinter::debugPrefix, "libFound "_s, $$str(CUPSPrinter::libFound)}));
	if (CUPSPrinter::libFound) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(CUPSPrinter::debugPrefix);
		var$0->append("CUPS server "_s);
		var$0->append($(getServer()));
		var$0->append(" port "_s);
		var$0->append(getPort());
		$IPPPrintService::debug_println($$str(var$0));
		$var($String, var$1, getServer());
		return canConnect(var$1, getPort());
	} else {
		return false;
	}
}

void CUPSPrinter::clinit$($Class* clazz) {
	$assignStatic(CUPSPrinter::debugPrefix, "CUPSPrinter>> "_s);
	CUPSPrinter::PRINTER_DPI = 72.0;
	$beforeCallerSensitive();
	CUPSPrinter::$assertionsDisabled = !CUPSPrinter::class$->desiredAssertionStatus();
	$assignStatic(CUPSPrinter::cupsServer, nullptr);
	CUPSPrinter::cupsPort = 0;
	{
		$AccessController::doPrivileged($$new($CUPSPrinter$1));
		CUPSPrinter::libFound = CUPSPrinter::initIDs();
		if (CUPSPrinter::libFound) {
			$assignStatic(CUPSPrinter::cupsServer, CUPSPrinter::getCupsServer());
			CUPSPrinter::cupsPort = CUPSPrinter::getCupsPort();
		}
	}
}

CUPSPrinter::CUPSPrinter() {
}

$Class* CUPSPrinter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CUPSPrinter, $assertionsDisabled)},
		{"debugPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CUPSPrinter, debugPrefix)},
		{"PRINTER_DPI", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CUPSPrinter, PRINTER_DPI)},
		{"initialized", "Z", nullptr, $PRIVATE, $field(CUPSPrinter, initialized)},
		{"cupsMediaPrintables", "[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsMediaPrintables)},
		{"cupsMediaSNames", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsMediaSNames)},
		{"cupsCustomMediaSNames", "[Lsun/print/CustomMediaSizeName;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsCustomMediaSNames)},
		{"cupsMediaTrays", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsMediaTrays)},
		{"nPageSizes", "I", nullptr, $PUBLIC, $field(CUPSPrinter, nPageSizes)},
		{"nTrays", "I", nullptr, $PUBLIC, $field(CUPSPrinter, nTrays)},
		{"media", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(CUPSPrinter, media)},
		{"pageSizes", "[F", nullptr, $PRIVATE, $field(CUPSPrinter, pageSizes)},
		{"resolutionsArray", "[I", nullptr, 0, $field(CUPSPrinter, resolutionsArray)},
		{"printer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CUPSPrinter, printer)},
		{"libFound", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CUPSPrinter, libFound)},
		{"cupsServer", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CUPSPrinter, cupsServer)},
		{"cupsPort", "I", nullptr, $PRIVATE | $STATIC, $staticField(CUPSPrinter, cupsPort)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CUPSPrinter, init$, void, $String*)},
		{"canConnect", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CUPSPrinter, canConnect, bool, $String*, int32_t)},
		{"getAllPrinters", "()[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(CUPSPrinter, getAllPrinters, $StringArray*)},
		{"getCupsDefaultPrinter", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CUPSPrinter, getCupsDefaultPrinter, $String*)},
		{"getCupsPort", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CUPSPrinter, getCupsPort, int32_t)},
		{"getCupsServer", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CUPSPrinter, getCupsServer, $String*)},
		{"getCustomMediaSizeNames", "()[Lsun/print/CustomMediaSizeName;", nullptr, 0, $virtualMethod(CUPSPrinter, getCustomMediaSizeNames, $CustomMediaSizeNameArray*)},
		{"getDefaultMediaIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CUPSPrinter, getDefaultMediaIndex, int32_t)},
		{"getDefaultPrinter", "()[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(CUPSPrinter, getDefaultPrinter, $StringArray*)},
		{"getMedia", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(CUPSPrinter, getMedia, $StringArray*, $String*)},
		{"getMediaPrintableArea", "()[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, 0, $virtualMethod(CUPSPrinter, getMediaPrintableArea, $MediaPrintableAreaArray*)},
		{"getMediaSizeNames", "()[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, 0, $virtualMethod(CUPSPrinter, getMediaSizeNames, $MediaSizeNameArray*)},
		{"getMediaTrays", "()[Ljavax/print/attribute/standard/MediaTray;", nullptr, 0, $virtualMethod(CUPSPrinter, getMediaTrays, $MediaTrayArray*)},
		{"getPageSizes", "(Ljava/lang/String;)[F", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(CUPSPrinter, getPageSizes, $floats*, $String*)},
		{"getPort", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(CUPSPrinter, getPort, int32_t)},
		{"getRawResolutions", "()[I", nullptr, 0, $virtualMethod(CUPSPrinter, getRawResolutions, $ints*)},
		{"getResolutions", "(Ljava/lang/String;Ljava/util/ArrayList;)V", "(Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/Integer;>;)V", $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(CUPSPrinter, getResolutions, void, $String*, $ArrayList*)},
		{"getServer", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(CUPSPrinter, getServer, $String*)},
		{"initIDs", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CUPSPrinter, initIDs, bool)},
		{"initMedia", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(CUPSPrinter, initMedia, void)},
		{"isCupsRunning", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(CUPSPrinter, isCupsRunning, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.CUPSPrinter$3", nullptr, nullptr, 0},
		{"sun.print.CUPSPrinter$2", nullptr, nullptr, 0},
		{"sun.print.CUPSPrinter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.CUPSPrinter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.print.CUPSPrinter$3,sun.print.CUPSPrinter$2,sun.print.CUPSPrinter$1"
	};
	$loadClass(CUPSPrinter, name, initialize, &classInfo$$, CUPSPrinter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CUPSPrinter);
	});
	return class$;
}

$Class* CUPSPrinter::class$ = nullptr;

	} // print
} // sun