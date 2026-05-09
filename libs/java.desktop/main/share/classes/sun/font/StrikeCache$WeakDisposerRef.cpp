#include <sun/font/StrikeCache$WeakDisposerRef.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeCache.h>
#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $StrikeCache = ::sun::font::StrikeCache;
using $Disposer = ::sun::java2d::Disposer;

namespace sun {
	namespace font {

$Object* StrikeCache$WeakDisposerRef::clone() {
	return this->$WeakReference::clone();
}

int32_t StrikeCache$WeakDisposerRef::hashCode() {
	return this->$WeakReference::hashCode();
}

bool StrikeCache$WeakDisposerRef::equals(Object$* arg0) {
	return this->$WeakReference::equals(arg0);
}

$String* StrikeCache$WeakDisposerRef::toString() {
	return this->$WeakReference::toString();
}

void StrikeCache$WeakDisposerRef::finalize() {
	this->$WeakReference::finalize();
}

$FontStrikeDisposer* StrikeCache$WeakDisposerRef::getDisposer() {
	return this->disposer;
}

void StrikeCache$WeakDisposerRef::init$($FontStrike* strike) {
	$init($StrikeCache);
	$WeakReference::init$(strike, $StrikeCache::refQueue);
	$set(this, disposer, $nc(strike)->disposer);
	$Disposer::addReference($cast($Reference, this), this->disposer);
}

StrikeCache$WeakDisposerRef::StrikeCache$WeakDisposerRef() {
}

$Class* StrikeCache$WeakDisposerRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $PRIVATE, $field(StrikeCache$WeakDisposerRef, disposer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/font/FontStrike;)V", nullptr, 0, $method(StrikeCache$WeakDisposerRef, init$, void, $FontStrike*)},
		{"getDisposer", "()Lsun/font/FontStrikeDisposer;", nullptr, $PUBLIC, $virtualMethod(StrikeCache$WeakDisposerRef, getDisposer, $FontStrikeDisposer*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.StrikeCache$WeakDisposerRef", "sun.font.StrikeCache", "WeakDisposerRef", $STATIC},
		{"sun.font.StrikeCache$DisposableStrike", "sun.font.StrikeCache", "DisposableStrike", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.StrikeCache$WeakDisposerRef",
		"java.lang.ref.WeakReference",
		"sun.font.StrikeCache$DisposableStrike",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Lsun/font/FontStrike;>;Lsun/font/StrikeCache$DisposableStrike;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.StrikeCache"
	};
	$loadClass(StrikeCache$WeakDisposerRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StrikeCache$WeakDisposerRef));
	});
	return class$;
}

$Class* StrikeCache$WeakDisposerRef::class$ = nullptr;

	} // font
} // sun