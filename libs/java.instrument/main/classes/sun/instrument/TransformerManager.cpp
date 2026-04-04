#include <sun/instrument/TransformerManager.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/instrument/ClassFileTransformer.h>
#include <java/security/ProtectionDomain.h>
#include <sun/instrument/TransformerManager$TransformerInfo.h>
#include <jcpp.h>

using $TransformerManager$TransformerInfoArray = $Array<::sun::instrument::TransformerManager$TransformerInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ClassFileTransformer = ::java::lang::instrument::ClassFileTransformer;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $TransformerManager$TransformerInfo = ::sun::instrument::TransformerManager$TransformerInfo;

namespace sun {
	namespace instrument {

void TransformerManager::init$(bool isRetransformable) {
	$set(this, mTransformerList, $new($TransformerManager$TransformerInfoArray, 0));
	this->mIsRetransformable = isRetransformable;
}

bool TransformerManager::isRetransformable() {
	return this->mIsRetransformable;
}

void TransformerManager::addTransformer($ClassFileTransformer* transformer) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($TransformerManager$TransformerInfoArray, oldList, this->mTransformerList);
		$var($TransformerManager$TransformerInfoArray, newList, $new($TransformerManager$TransformerInfoArray, $nc(oldList)->length + 1));
		$System::arraycopy(oldList, 0, newList, 0, oldList->length);
		newList->set(oldList->length, $$new($TransformerManager$TransformerInfo, this, transformer));
		$set(this, mTransformerList, newList);
	}
}

bool TransformerManager::removeTransformer($ClassFileTransformer* transformer) {
	$synchronized(this) {
		$useLocalObjectStack();
		bool found = false;
		$var($TransformerManager$TransformerInfoArray, oldList, this->mTransformerList);
		int32_t oldLength = $nc(oldList)->length;
		int32_t newLength = oldLength - 1;
		int32_t matchingIndex = 0;
		for (int32_t x = oldLength - 1; x >= 0; --x) {
			if ($nc(oldList->get(x))->transformer() == transformer) {
				found = true;
				matchingIndex = x;
				break;
			}
		}
		if (found) {
			$var($TransformerManager$TransformerInfoArray, newList, $new($TransformerManager$TransformerInfoArray, newLength));
			if (matchingIndex > 0) {
				$System::arraycopy(oldList, 0, newList, 0, matchingIndex);
			}
			if (matchingIndex < (newLength)) {
				$System::arraycopy(oldList, matchingIndex + 1, newList, matchingIndex, (newLength) - matchingIndex);
			}
			$set(this, mTransformerList, newList);
		}
		return found;
	}
}

bool TransformerManager::includesTransformer($ClassFileTransformer* transformer) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($TransformerManager$TransformerInfoArray, arr$, this->mTransformerList);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($TransformerManager$TransformerInfo, info, arr$->get(i$));
			if ($nc(info)->transformer() == transformer) {
				return true;
			}
		}
		return false;
	}
}

$TransformerManager$TransformerInfoArray* TransformerManager::getSnapshotTransformerList() {
	return this->mTransformerList;
}

$bytes* TransformerManager::transform($Module* module, $ClassLoader* loader, $String* classname, $Class* classBeingRedefined, $ProtectionDomain* protectionDomain, $bytes* classfileBuffer) {
	$useLocalObjectStack();
	bool someoneTouchedTheBytecode = false;
	$var($TransformerManager$TransformerInfoArray, transformerList, getSnapshotTransformerList());
	$var($bytes, bufferToUse, classfileBuffer);
	for (int32_t x = 0; x < $nc(transformerList)->length; ++x) {
		$var($TransformerManager$TransformerInfo, transformerInfo, transformerList->get(x));
		$var($ClassFileTransformer, transformer, $nc(transformerInfo)->transformer());
		$var($bytes, transformedBytes, nullptr);
		try {
			$assign(transformedBytes, $nc(transformer)->transform(module, loader, classname, classBeingRedefined, protectionDomain, bufferToUse));
		} catch ($Throwable& t) {
		}
		if (transformedBytes != nullptr) {
			someoneTouchedTheBytecode = true;
			$assign(bufferToUse, transformedBytes);
		}
	}
	$var($bytes, result, nullptr);
	if (someoneTouchedTheBytecode) {
		$assign(result, bufferToUse);
	} else {
		$assign(result, nullptr);
	}
	return result;
}

int32_t TransformerManager::getTransformerCount() {
	$var($TransformerManager$TransformerInfoArray, transformerList, getSnapshotTransformerList());
	return $nc(transformerList)->length;
}

bool TransformerManager::setNativeMethodPrefix($ClassFileTransformer* transformer, $String* prefix) {
	$useLocalObjectStack();
	$var($TransformerManager$TransformerInfoArray, transformerList, getSnapshotTransformerList());
	for (int32_t x = 0; x < $nc(transformerList)->length; ++x) {
		$var($TransformerManager$TransformerInfo, transformerInfo, transformerList->get(x));
		$var($ClassFileTransformer, aTransformer, $nc(transformerInfo)->transformer());
		if (aTransformer == transformer) {
			transformerInfo->setPrefix(prefix);
			return true;
		}
	}
	return false;
}

$StringArray* TransformerManager::getNativeMethodPrefixes() {
	$useLocalObjectStack();
	$var($TransformerManager$TransformerInfoArray, transformerList, getSnapshotTransformerList());
	$var($StringArray, prefixes, $new($StringArray, $nc(transformerList)->length));
	for (int32_t x = 0; x < transformerList->length; ++x) {
		$var($TransformerManager$TransformerInfo, transformerInfo, transformerList->get(x));
		prefixes->set(x, $($nc(transformerInfo)->getPrefix()));
	}
	return prefixes;
}

TransformerManager::TransformerManager() {
}

$Class* TransformerManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mTransformerList", "[Lsun/instrument/TransformerManager$TransformerInfo;", nullptr, $PRIVATE, $field(TransformerManager, mTransformerList)},
		{"mIsRetransformable", "Z", nullptr, $PRIVATE, $field(TransformerManager, mIsRetransformable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(TransformerManager, init$, void, bool)},
		{"addTransformer", "(Ljava/lang/instrument/ClassFileTransformer;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TransformerManager, addTransformer, void, $ClassFileTransformer*)},
		{"getNativeMethodPrefixes", "()[Ljava/lang/String;", nullptr, 0, $virtualMethod(TransformerManager, getNativeMethodPrefixes, $StringArray*)},
		{"getSnapshotTransformerList", "()[Lsun/instrument/TransformerManager$TransformerInfo;", nullptr, $PRIVATE, $method(TransformerManager, getSnapshotTransformerList, $TransformerManager$TransformerInfoArray*)},
		{"getTransformerCount", "()I", nullptr, 0, $virtualMethod(TransformerManager, getTransformerCount, int32_t)},
		{"includesTransformer", "(Ljava/lang/instrument/ClassFileTransformer;)Z", nullptr, $SYNCHRONIZED, $virtualMethod(TransformerManager, includesTransformer, bool, $ClassFileTransformer*)},
		{"isRetransformable", "()Z", nullptr, 0, $virtualMethod(TransformerManager, isRetransformable, bool)},
		{"removeTransformer", "(Ljava/lang/instrument/ClassFileTransformer;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TransformerManager, removeTransformer, bool, $ClassFileTransformer*)},
		{"setNativeMethodPrefix", "(Ljava/lang/instrument/ClassFileTransformer;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(TransformerManager, setNativeMethodPrefix, bool, $ClassFileTransformer*, $String*)},
		{"transform", "(Ljava/lang/Module;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Class;Ljava/security/ProtectionDomain;[B)[B", "(Ljava/lang/Module;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Class<*>;Ljava/security/ProtectionDomain;[B)[B", $PUBLIC, $virtualMethod(TransformerManager, transform, $bytes*, $Module*, $ClassLoader*, $String*, $Class*, $ProtectionDomain*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.instrument.TransformerManager$TransformerInfo", "sun.instrument.TransformerManager", "TransformerInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.instrument.TransformerManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.instrument.TransformerManager$TransformerInfo"
	};
	$loadClass(TransformerManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformerManager);
	});
	return class$;
}

$Class* TransformerManager::class$ = nullptr;

	} // instrument
} // sun