#include <java/awt/Cursor.h>
#include <java/awt/AWTException.h>
#include <java/awt/Cursor$1.h>
#include <java/awt/Cursor$CursorDisposer.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/java2d/Disposer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CROSSHAIR_CURSOR
#undef CURSOR_DOT_PREFIX
#undef CUSTOM_CURSOR
#undef DEFAULT_CURSOR
#undef DOT_FILE_SUFFIX
#undef DOT_HOTSPOT_SUFFIX
#undef DOT_NAME_SUFFIX
#undef E_RESIZE_CURSOR
#undef FINER
#undef HAND_CURSOR
#undef MOVE_CURSOR
#undef NE_RESIZE_CURSOR
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef PROPERTIES_FILE
#undef RESOURCE_PREFIX
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef TEXT_CURSOR
#undef WAIT_CURSOR
#undef W_RESIZE_CURSOR

using $CursorArray = $Array<::java::awt::Cursor>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $AWTException = ::java::awt::AWTException;
using $Cursor$1 = ::java::awt::Cursor$1;
using $Cursor$CursorDisposer = ::java::awt::Cursor$CursorDisposer;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Hashtable = ::java::util::Hashtable;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $Disposer = ::sun::java2d::Disposer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

class Cursor$$Lambda$lambda$getSystemCustomCursor$0 : public $PrivilegedAction {
	$class(Cursor$$Lambda$lambda$getSystemCustomCursor$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* file) {
		$set(this, file, file);
	}
	virtual $Object* run() override {
		 return Cursor::lambda$getSystemCustomCursor$0(file);
	}
	$String* file = nullptr;
};
$Class* Cursor$$Lambda$lambda$getSystemCustomCursor$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"file", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Cursor$$Lambda$lambda$getSystemCustomCursor$0, file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Cursor$$Lambda$lambda$getSystemCustomCursor$0, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Cursor$$Lambda$lambda$getSystemCustomCursor$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.awt.Cursor$$Lambda$lambda$getSystemCustomCursor$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Cursor$$Lambda$lambda$getSystemCustomCursor$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cursor$$Lambda$lambda$getSystemCustomCursor$0);
	});
	return class$;
}
$Class* Cursor$$Lambda$lambda$getSystemCustomCursor$0::class$ = nullptr;

class Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1 : public $PrivilegedExceptionAction {
	$class(Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return Cursor::lambda$loadSystemCustomCursorProperties$1();
	}
};
$Class* Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.awt.Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1);
	});
	return class$;
}
$Class* Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1::class$ = nullptr;

$CursorArray* Cursor::predefined = nullptr;
$CursorArray* Cursor::predefinedPrivate = nullptr;
$StringArray2* Cursor::cursorProperties = nullptr;
$Hashtable* Cursor::systemCustomCursors = nullptr;
$String* Cursor::RESOURCE_PREFIX = nullptr;
$String* Cursor::PROPERTIES_FILE = nullptr;
$Properties* Cursor::systemCustomCursorProperties = nullptr;
$String* Cursor::CURSOR_DOT_PREFIX = nullptr;
$String* Cursor::DOT_FILE_SUFFIX = nullptr;
$String* Cursor::DOT_HOTSPOT_SUFFIX = nullptr;
$String* Cursor::DOT_NAME_SUFFIX = nullptr;
$PlatformLogger* Cursor::log = nullptr;

void Cursor::initIDs() {
	$init(Cursor);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Cursor::setPData(int64_t pData) {
	this->pData = pData;
	if ($GraphicsEnvironment::isHeadless()) {
		return;
	}
	if (this->disposer == nullptr) {
		$set(this, disposer, $new($Cursor$CursorDisposer, pData));
		if (this->anchor == nullptr) {
			$set(this, anchor, $new($Object));
		}
		$Disposer::addRecord(this->anchor, this->disposer);
	} else {
		this->disposer->pData = pData;
	}
}

Cursor* Cursor::getPredefinedCursor(int32_t type) {
	$init(Cursor);
	if (type < Cursor::DEFAULT_CURSOR || type > Cursor::MOVE_CURSOR) {
		$throwNew($IllegalArgumentException, "illegal cursor type"_s);
	}
	$var(Cursor, c, Cursor::predefinedPrivate->get(type));
	if (c == nullptr) {
		Cursor::predefinedPrivate->set(type, $assign(c, $new(Cursor, type)));
	}
	if ($nc(Cursor::predefined)->get(type) == nullptr) {
		Cursor::predefined->set(type, c);
	}
	return c;
}

Cursor* Cursor::getSystemCustomCursor($String* name) {
	$init(Cursor);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$GraphicsEnvironment::checkHeadless();
	$var(Cursor, cursor, $cast(Cursor, Cursor::systemCustomCursors->get(name)));
	if (cursor == nullptr) {
		$synchronized(Cursor::systemCustomCursors) {
			if (Cursor::systemCustomCursorProperties == nullptr) {
				loadSystemCustomCursorProperties();
			}
		}
		$var($String, prefix, $str({Cursor::CURSOR_DOT_PREFIX, name}));
		$var($String, key, $str({prefix, Cursor::DOT_FILE_SUFFIX}));
		if (!$nc(Cursor::systemCustomCursorProperties)->containsKey(key)) {
			$init($PlatformLogger$Level);
			if ($nc(Cursor::log)->isLoggable($PlatformLogger$Level::FINER)) {
				Cursor::log->finer($$str({"Cursor.getSystemCustomCursor("_s, name, ") returned null"_s}));
			}
			return nullptr;
		}
		$var($String, fileName, $nc(Cursor::systemCustomCursorProperties)->getProperty(key));
		$var($String, localized, Cursor::systemCustomCursorProperties->getProperty($$str({prefix, Cursor::DOT_NAME_SUFFIX}), name));
		$var($String, hotspot, Cursor::systemCustomCursorProperties->getProperty($$str({prefix, Cursor::DOT_HOTSPOT_SUFFIX})));
		if (hotspot == nullptr) {
			$throwNew($AWTException, $$str({"no hotspot property defined for cursor: "_s, name}));
		}
		$var($StringTokenizer, st, $new($StringTokenizer, hotspot, ","_s));
		if (st->countTokens() != 2) {
			$throwNew($AWTException, $$str({"failed to parse hotspot property for cursor: "_s, name}));
		}
		$var($Point, hotPoint, nullptr);
		try {
			int32_t var$0 = $Integer::parseInt($(st->nextToken()));
			$assign(hotPoint, $new($Point, var$0, $Integer::parseInt($(st->nextToken()))));
		} catch ($NumberFormatException& nfe) {
			$throwNew($AWTException, $$str({"failed to parse hotspot property for cursor: "_s, name}));
		}
		$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
		$var($String, file, $str({Cursor::RESOURCE_PREFIX, fileName}));
		$var($InputStream, in, $cast($InputStream, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Cursor$$Lambda$lambda$getSystemCustomCursor$0, file)))));
		try {
			$var($InputStream, twrVar0$, in);
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$var($Image, image, $nc(toolkit)->createImage($($nc(in)->readAllBytes())));
					$assign(cursor, toolkit->createCustomCursor(image, hotPoint, localized));
				} catch ($Throwable& t$) {
					if (twrVar0$ != nullptr) {
						try {
							twrVar0$->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				if (twrVar0$ != nullptr) {
					twrVar0$->close();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		} catch ($Exception& e) {
			$var($StringBuilder, var$3, $new($StringBuilder));
			var$3->append("Exception: "_s);
			var$3->append(e->getClass());
			var$3->append(" "_s);
			var$3->append($(e->getMessage()));
			var$3->append(" occurred while creating cursor "_s);
			var$3->append(name);
			$throwNew($AWTException, $$str(var$3));
		}
		if (cursor == nullptr) {
			$init($PlatformLogger$Level);
			if ($nc(Cursor::log)->isLoggable($PlatformLogger$Level::FINER)) {
				Cursor::log->finer($$str({"Cursor.getSystemCustomCursor("_s, name, ") returned null"_s}));
			}
		} else {
			Cursor::systemCustomCursors->put(name, cursor);
		}
	}
	return cursor;
}

Cursor* Cursor::getDefaultCursor() {
	$init(Cursor);
	return getPredefinedCursor(Cursor::DEFAULT_CURSOR);
}

void Cursor::init$(int32_t type) {
	this->type = Cursor::DEFAULT_CURSOR;
	$set(this, anchor, $new($Object));
	if (type < Cursor::DEFAULT_CURSOR || type > Cursor::MOVE_CURSOR) {
		$throwNew($IllegalArgumentException, "illegal cursor type"_s);
	}
	this->type = type;
	$set(this, name, $Toolkit::getProperty($nc(Cursor::cursorProperties->get(type))->get(0), $nc(Cursor::cursorProperties->get(type))->get(1)));
}

void Cursor::init$($String* name) {
	this->type = Cursor::DEFAULT_CURSOR;
	$set(this, anchor, $new($Object));
	this->type = Cursor::CUSTOM_CURSOR;
	$set(this, name, name);
}

int32_t Cursor::getType() {
	return this->type;
}

$String* Cursor::getName() {
	return this->name;
}

$String* Cursor::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("["_s);
	var$0->append($(getName()));
	var$0->append("]"_s);
	return $str(var$0);
}

void Cursor::loadSystemCustomCursorProperties() {
	$init(Cursor);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$synchronized(Cursor::systemCustomCursors) {
		$assignStatic(Cursor::systemCustomCursorProperties, $new($Properties));
		try {
			$AccessController::doPrivileged($cast($PrivilegedExceptionAction, $$new(Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1)));
		} catch ($Exception& e) {
			$assignStatic(Cursor::systemCustomCursorProperties, nullptr);
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Exception: "_s);
			var$0->append(e->getClass());
			var$0->append(" "_s);
			var$0->append($(e->getMessage()));
			var$0->append(" occurred while loading: "_s);
			var$0->append(Cursor::PROPERTIES_FILE);
			$throwNew($AWTException, $$str(var$0));
		}
	}
}

void Cursor::finalizeImpl(int64_t pData) {
	$init(Cursor);
	$prepareNativeStatic(finalizeImpl, void, int64_t pData);
	$invokeNativeStatic(pData);
	$finishNativeStatic();
}

$Object* Cursor::lambda$loadSystemCustomCursorProperties$1() {
	$init(Cursor);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($InputStream, is, Cursor::class$->getResourceAsStream(Cursor::PROPERTIES_FILE));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(Cursor::systemCustomCursorProperties)->load(is);
			} catch ($Throwable& t$) {
				if (is != nullptr) {
					try {
						is->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (is != nullptr) {
				is->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return nullptr;
}

$InputStream* Cursor::lambda$getSystemCustomCursor$0($String* file) {
	$init(Cursor);
	$beforeCallerSensitive();
	return Cursor::class$->getResourceAsStream(file);
}

void Cursor::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Cursor::RESOURCE_PREFIX, "/sun/awt/resources/cursors/"_s);
	$assignStatic(Cursor::PROPERTIES_FILE, $str({Cursor::RESOURCE_PREFIX, "cursors.properties"_s}));
	$assignStatic(Cursor::CURSOR_DOT_PREFIX, "Cursor."_s);
	$assignStatic(Cursor::DOT_FILE_SUFFIX, ".File"_s);
	$assignStatic(Cursor::DOT_HOTSPOT_SUFFIX, ".HotSpot"_s);
	$assignStatic(Cursor::DOT_NAME_SUFFIX, ".Name"_s);
	$assignStatic(Cursor::predefined, $new($CursorArray, 14));
	$assignStatic(Cursor::predefinedPrivate, $new($CursorArray, 14));
	$assignStatic(Cursor::cursorProperties, $new($StringArray2, {
		$$new($StringArray, {
			"AWT.DefaultCursor"_s,
			"Default Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.CrosshairCursor"_s,
			"Crosshair Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.TextCursor"_s,
			"Text Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.WaitCursor"_s,
			"Wait Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.SWResizeCursor"_s,
			"Southwest Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.SEResizeCursor"_s,
			"Southeast Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.NWResizeCursor"_s,
			"Northwest Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.NEResizeCursor"_s,
			"Northeast Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.NResizeCursor"_s,
			"North Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.SResizeCursor"_s,
			"South Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.WResizeCursor"_s,
			"West Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.EResizeCursor"_s,
			"East Resize Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.HandCursor"_s,
			"Hand Cursor"_s
		}),
		$$new($StringArray, {
			"AWT.MoveCursor"_s,
			"Move Cursor"_s
		})
	}));
	$assignStatic(Cursor::systemCustomCursors, $new($Hashtable, 1));
	$assignStatic(Cursor::systemCustomCursorProperties, nullptr);
	$assignStatic(Cursor::log, $PlatformLogger::getLogger("java.awt.Cursor"_s));
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Cursor::initIDs();
		}
		$AWTAccessor::setCursorAccessor($$new($Cursor$1));
	}
}

Cursor::Cursor() {
}

$Class* Cursor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.awt.Cursor$$Lambda$lambda$getSystemCustomCursor$0")) {
			return Cursor$$Lambda$lambda$getSystemCustomCursor$0::load$(name, initialize);
		}
		if (name->equals("java.awt.Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1")) {
			return Cursor$$Lambda$lambda$loadSystemCustomCursorProperties$1$1::load$(name, initialize);
		}
	}
	$CompoundAttribute predefinedfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, DEFAULT_CURSOR)},
		{"CROSSHAIR_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, CROSSHAIR_CURSOR)},
		{"TEXT_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, TEXT_CURSOR)},
		{"WAIT_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, WAIT_CURSOR)},
		{"SW_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, SW_RESIZE_CURSOR)},
		{"SE_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, SE_RESIZE_CURSOR)},
		{"NW_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, NW_RESIZE_CURSOR)},
		{"NE_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, NE_RESIZE_CURSOR)},
		{"N_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, N_RESIZE_CURSOR)},
		{"S_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, S_RESIZE_CURSOR)},
		{"W_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, W_RESIZE_CURSOR)},
		{"E_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, E_RESIZE_CURSOR)},
		{"HAND_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, HAND_CURSOR)},
		{"MOVE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, MOVE_CURSOR)},
		{"predefined", "[Ljava/awt/Cursor;", nullptr, $PROTECTED | $STATIC | $DEPRECATED, $staticField(Cursor, predefined), predefinedfieldAnnotations$$},
		{"predefinedPrivate", "[Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, predefinedPrivate)},
		{"cursorProperties", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Cursor, cursorProperties)},
		{"type", "I", nullptr, 0, $field(Cursor, type)},
		{"CUSTOM_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Cursor, CUSTOM_CURSOR)},
		{"systemCustomCursors", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/awt/Cursor;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, systemCustomCursors)},
		{"RESOURCE_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, RESOURCE_PREFIX)},
		{"PROPERTIES_FILE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, PROPERTIES_FILE)},
		{"systemCustomCursorProperties", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(Cursor, systemCustomCursorProperties)},
		{"CURSOR_DOT_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, CURSOR_DOT_PREFIX)},
		{"DOT_FILE_SUFFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, DOT_FILE_SUFFIX)},
		{"DOT_HOTSPOT_SUFFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, DOT_HOTSPOT_SUFFIX)},
		{"DOT_NAME_SUFFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, DOT_NAME_SUFFIX)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Cursor, serialVersionUID)},
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cursor, log)},
		{"pData", "J", nullptr, $PRIVATE | $TRANSIENT, $field(Cursor, pData)},
		{"anchor", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(Cursor, anchor)},
		{"disposer", "Ljava/awt/Cursor$CursorDisposer;", nullptr, $TRANSIENT, $field(Cursor, disposer)},
		{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Cursor, name)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "type"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Cursor, init$, void, int32_t), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(Cursor, init$, void, $String*)},
		{"finalizeImpl", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Cursor, finalizeImpl, void, int64_t)},
		{"getDefaultCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC, $staticMethod(Cursor, getDefaultCursor, Cursor*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Cursor, getName, $String*)},
		{"getPredefinedCursor", "(I)Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC, $staticMethod(Cursor, getPredefinedCursor, Cursor*, int32_t)},
		{"getSystemCustomCursor", "(Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PUBLIC | $STATIC, $staticMethod(Cursor, getSystemCustomCursor, Cursor*, $String*), "java.awt.AWTException,java.awt.HeadlessException"},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(Cursor, getType, int32_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Cursor, initIDs, void)},
		{"lambda$getSystemCustomCursor$0", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Cursor, lambda$getSystemCustomCursor$0, $InputStream*, $String*)},
		{"lambda$loadSystemCustomCursorProperties$1", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Cursor, lambda$loadSystemCustomCursorProperties$1, $Object*), "java.lang.Exception"},
		{"loadSystemCustomCursorProperties", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Cursor, loadSystemCustomCursorProperties, void), "java.awt.AWTException"},
		{"setPData", "(J)V", nullptr, $PRIVATE, $method(Cursor, setPData, void, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Cursor, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Cursor$CursorDisposer", "java.awt.Cursor", "CursorDisposer", $STATIC},
		{"java.awt.Cursor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Cursor",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.Cursor$CursorDisposer,java.awt.Cursor$1"
	};
	$loadClass(Cursor, name, initialize, &classInfo$$, Cursor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Cursor);
	});
	return class$;
}

$Class* Cursor::class$ = nullptr;

	} // awt
} // java