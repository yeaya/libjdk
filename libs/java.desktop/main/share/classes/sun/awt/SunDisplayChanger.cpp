#include <sun/awt/SunDisplayChanger.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef FINER
#undef FINEST

using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$PlatformLogger* SunDisplayChanger::log = nullptr;

void SunDisplayChanger::init$() {
	$set(this, listeners, $Collections::synchronizedMap($$new($WeakHashMap, 1)));
}

void SunDisplayChanger::add($DisplayChangedListener* theListener) {
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (theListener == nullptr) {
			SunDisplayChanger::log->fine("Assertion (theListener != null) failed"_s);
		}
	}
	if (SunDisplayChanger::log->isLoggable($PlatformLogger$Level::FINER)) {
		SunDisplayChanger::log->finer($$str({"Adding listener: "_s, theListener}));
	}
	$nc(this->listeners)->put(theListener, nullptr);
}

void SunDisplayChanger::remove($DisplayChangedListener* theListener) {
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (theListener == nullptr) {
			SunDisplayChanger::log->fine("Assertion (theListener != null) failed"_s);
		}
	}
	if (SunDisplayChanger::log->isLoggable($PlatformLogger$Level::FINER)) {
		SunDisplayChanger::log->finer($$str({"Removing listener: "_s, theListener}));
	}
	$nc(this->listeners)->remove(theListener);
}

void SunDisplayChanger::notifyListeners() {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		SunDisplayChanger::log->finest("notifyListeners"_s);
	}
	$var($Set, cloneSet, nullptr);
	$synchronized(this->listeners) {
		$assign(cloneSet, $new($HashSet, $(this->listeners->keySet())));
	}
	{
		$var($Iterator, i$, cloneSet->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DisplayChangedListener, current, $cast($DisplayChangedListener, i$->next()));
			try {
				if (SunDisplayChanger::log->isLoggable($PlatformLogger$Level::FINEST)) {
					SunDisplayChanger::log->finest($$str({"displayChanged for listener: "_s, current}));
				}
				$nc(current)->displayChanged();
			} catch ($IllegalComponentStateException& e) {
				$nc(this->listeners)->remove(current);
			}
		}
	}
}

void SunDisplayChanger::notifyPaletteChanged() {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		SunDisplayChanger::log->finest("notifyPaletteChanged"_s);
	}
	$var($Set, cloneSet, nullptr);
	$synchronized(this->listeners) {
		$assign(cloneSet, $new($HashSet, $(this->listeners->keySet())));
	}
	{
		$var($Iterator, i$, cloneSet->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DisplayChangedListener, current, $cast($DisplayChangedListener, i$->next()));
			try {
				if (SunDisplayChanger::log->isLoggable($PlatformLogger$Level::FINEST)) {
					SunDisplayChanger::log->finest($$str({"paletteChanged for listener: "_s, current}));
				}
				$nc(current)->paletteChanged();
			} catch ($IllegalComponentStateException& e) {
				$nc(this->listeners)->remove(current);
			}
		}
	}
}

void SunDisplayChanger::clinit$($Class* clazz) {
	$assignStatic(SunDisplayChanger::log, $PlatformLogger::getLogger("sun.awt.multiscreen.SunDisplayChanger"_s));
}

SunDisplayChanger::SunDisplayChanger() {
}

$Class* SunDisplayChanger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunDisplayChanger, log)},
		{"listeners", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/DisplayChangedListener;Ljava/lang/Void;>;", $PRIVATE, $field(SunDisplayChanger, listeners)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunDisplayChanger, init$, void)},
		{"add", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC, $virtualMethod(SunDisplayChanger, add, void, $DisplayChangedListener*)},
		{"notifyListeners", "()V", nullptr, $PUBLIC, $virtualMethod(SunDisplayChanger, notifyListeners, void)},
		{"notifyPaletteChanged", "()V", nullptr, $PUBLIC, $virtualMethod(SunDisplayChanger, notifyPaletteChanged, void)},
		{"remove", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC, $virtualMethod(SunDisplayChanger, remove, void, $DisplayChangedListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.SunDisplayChanger",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SunDisplayChanger, name, initialize, &classInfo$$, SunDisplayChanger::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SunDisplayChanger);
	});
	return class$;
}

$Class* SunDisplayChanger::class$ = nullptr;

	} // awt
} // sun