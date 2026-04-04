#include <com/sun/tools/javac/file/BaseFileManager$ContentCacheEntry.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/lang/ref/SoftReference.h>
#include <java/nio/CharBuffer.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $CharBuffer = ::java::nio::CharBuffer;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void BaseFileManager$ContentCacheEntry::init$($JavaFileObject* file, $CharBuffer* cb) {
	this->timestamp = $nc(file)->getLastModified();
	$set(this, ref, $new($SoftReference, cb));
}

bool BaseFileManager$ContentCacheEntry::isValid($JavaFileObject* file) {
	return this->timestamp == $nc(file)->getLastModified();
}

$CharBuffer* BaseFileManager$ContentCacheEntry::getValue() {
	return $cast($CharBuffer, $nc(this->ref)->get());
}

BaseFileManager$ContentCacheEntry::BaseFileManager$ContentCacheEntry() {
}

$Class* BaseFileManager$ContentCacheEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"timestamp", "J", nullptr, $FINAL, $field(BaseFileManager$ContentCacheEntry, timestamp)},
		{"ref", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/nio/CharBuffer;>;", $FINAL, $field(BaseFileManager$ContentCacheEntry, ref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/tools/JavaFileObject;Ljava/nio/CharBuffer;)V", nullptr, 0, $method(BaseFileManager$ContentCacheEntry, init$, void, $JavaFileObject*, $CharBuffer*)},
		{"getValue", "()Ljava/nio/CharBuffer;", nullptr, 0, $virtualMethod(BaseFileManager$ContentCacheEntry, getValue, $CharBuffer*)},
		{"isValid", "(Ljavax/tools/JavaFileObject;)Z", nullptr, 0, $virtualMethod(BaseFileManager$ContentCacheEntry, isValid, bool, $JavaFileObject*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry", "com.sun.tools.javac.file.BaseFileManager", "ContentCacheEntry", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.BaseFileManager"
	};
	$loadClass(BaseFileManager$ContentCacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaseFileManager$ContentCacheEntry);
	});
	return class$;
}

$Class* BaseFileManager$ContentCacheEntry::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com