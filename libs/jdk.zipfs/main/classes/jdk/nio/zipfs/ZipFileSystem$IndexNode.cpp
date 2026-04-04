#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/Arrays.h>
#include <jdk/nio/zipfs/ZipFileSystem$ParentLookup.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Arrays = ::java::util::Arrays;
using $ZipFileSystem$ParentLookup = ::jdk::nio::zipfs::ZipFileSystem$ParentLookup;

namespace jdk {
	namespace nio {
		namespace zipfs {

$ThreadLocal* ZipFileSystem$IndexNode::cachedKey = nullptr;

void ZipFileSystem$IndexNode::init$() {
	this->pos = -1;
}

void ZipFileSystem$IndexNode::init$($bytes* name, bool isdir) {
	this->pos = -1;
	this->name(name);
	this->isdir = isdir;
	this->pos = -1;
}

void ZipFileSystem$IndexNode::init$($bytes* name, int32_t pos) {
	this->pos = -1;
	this->name(name);
	this->pos = pos;
}

void ZipFileSystem$IndexNode::init$($bytes* cen, int32_t pos, int32_t nlen) {
	this->pos = -1;
	int32_t noff = pos + 46;
	if ($nc(cen)->get(noff + nlen - 1) == u'/') {
		this->isdir = true;
		--nlen;
	}
	if (nlen > 0 && cen->get(noff) == u'/') {
		$set(this, name$, $Arrays::copyOfRange(cen, noff, noff + nlen));
	} else {
		$set(this, name$, $new($bytes, nlen + 1));
		$System::arraycopy(cen, noff, this->name$, 1, nlen);
		this->name$->set(0, (int8_t)u'/');
	}
	name($(normalize(this->name$)));
	this->pos = pos;
}

$bytes* ZipFileSystem$IndexNode::normalize($bytes* path) {
	int32_t len = $nc(path)->length;
	if (len == 0) {
		return path;
	}
	int8_t prevC = 0;
	for (int32_t pathPos = 0; pathPos < len; ++pathPos) {
		int8_t c = path->get(pathPos);
		if (c == u'/' && prevC == u'/') {
			return normalize(path, pathPos - 1);
		}
		prevC = c;
	}
	if (len > 1 && prevC == u'/') {
		return $Arrays::copyOf(path, len - 1);
	}
	return path;
}

$bytes* ZipFileSystem$IndexNode::normalize($bytes* path, int32_t off) {
	$var($bytes, to, $new($bytes, $nc(path)->length - 1));
	int32_t pathPos = 0;
	while (pathPos < off) {
		to->set(pathPos, path->get(pathPos));
		++pathPos;
	}
	int32_t toPos = pathPos;
	int8_t prevC = 0;
	while (pathPos < path->length) {
		int8_t c = path->get(pathPos++);
		if (c == u'/' && prevC == u'/') {
			continue;
		}
		to->set(toPos++, c);
		prevC = c;
	}
	if (toPos > 1 && to->get(toPos - 1) == u'/') {
		--toPos;
	}
	return (toPos == to->length) ? to : $Arrays::copyOf(to, toPos);
}

ZipFileSystem$IndexNode* ZipFileSystem$IndexNode::keyOf($bytes* name) {
	$init(ZipFileSystem$IndexNode);
	$var(ZipFileSystem$IndexNode, key, $cast(ZipFileSystem$IndexNode, ZipFileSystem$IndexNode::cachedKey->get()));
	if (key == nullptr) {
		$assign(key, $new(ZipFileSystem$IndexNode, name, -1));
		ZipFileSystem$IndexNode::cachedKey->set(key);
	}
	return $nc(key)->as(name);
}

void ZipFileSystem$IndexNode::name($bytes* name) {
	$set(this, name$, name);
	this->hashcode = $Arrays::hashCode(name);
}

ZipFileSystem$IndexNode* ZipFileSystem$IndexNode::as($bytes* name) {
	this->name(name);
	return this;
}

bool ZipFileSystem$IndexNode::isDir() {
	return this->isdir;
}

bool ZipFileSystem$IndexNode::equals(Object$* other) {
	if (!($instanceOf(ZipFileSystem$IndexNode, other))) {
		return false;
	}
	if ($instanceOf($ZipFileSystem$ParentLookup, other)) {
		return $cast($ZipFileSystem$ParentLookup, other)->equals(this);
	}
	return $Arrays::equals(this->name$, $nc($cast(ZipFileSystem$IndexNode, other))->name$);
}

int32_t ZipFileSystem$IndexNode::hashCode() {
	return this->hashcode;
}

$String* ZipFileSystem$IndexNode::toString() {
	$useLocalObjectStack();
	return $str({$$new($String, this->name$), (this->isdir ? " (dir)"_s : " "_s), ", index: "_s, $$str(this->pos)});
}

void ZipFileSystem$IndexNode::clinit$($Class* clazz) {
	$assignStatic(ZipFileSystem$IndexNode::cachedKey, $new($ThreadLocal));
}

ZipFileSystem$IndexNode::ZipFileSystem$IndexNode() {
}

$Class* ZipFileSystem$IndexNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "[B", nullptr, 0, $field(ZipFileSystem$IndexNode, name$)},
		{"hashcode", "I", nullptr, 0, $field(ZipFileSystem$IndexNode, hashcode)},
		{"isdir", "Z", nullptr, 0, $field(ZipFileSystem$IndexNode, isdir)},
		{"pos", "I", nullptr, 0, $field(ZipFileSystem$IndexNode, pos)},
		{"child", "Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, 0, $field(ZipFileSystem$IndexNode, child)},
		{"sibling", "Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, 0, $field(ZipFileSystem$IndexNode, sibling)},
		{"cachedKey", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljdk/nio/zipfs/ZipFileSystem$IndexNode;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem$IndexNode, cachedKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ZipFileSystem$IndexNode, init$, void)},
		{"<init>", "([BZ)V", nullptr, 0, $method(ZipFileSystem$IndexNode, init$, void, $bytes*, bool)},
		{"<init>", "([BI)V", nullptr, 0, $method(ZipFileSystem$IndexNode, init$, void, $bytes*, int32_t)},
		{"<init>", "([BII)V", nullptr, 0, $method(ZipFileSystem$IndexNode, init$, void, $bytes*, int32_t, int32_t)},
		{"as", "([B)Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $FINAL, $method(ZipFileSystem$IndexNode, as, ZipFileSystem$IndexNode*, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$IndexNode, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$IndexNode, hashCode, int32_t)},
		{"isDir", "()Z", nullptr, 0, $virtualMethod(ZipFileSystem$IndexNode, isDir, bool)},
		{"keyOf", "([B)Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $STATIC | $FINAL, $staticMethod(ZipFileSystem$IndexNode, keyOf, ZipFileSystem$IndexNode*, $bytes*)},
		{"name", "([B)V", nullptr, $FINAL, $method(ZipFileSystem$IndexNode, name, void, $bytes*)},
		{"normalize", "([B)[B", nullptr, $PRIVATE, $method(ZipFileSystem$IndexNode, normalize, $bytes*, $bytes*)},
		{"normalize", "([BI)[B", nullptr, $PRIVATE, $method(ZipFileSystem$IndexNode, normalize, $bytes*, $bytes*, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFileSystem$IndexNode, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileSystem$IndexNode", "jdk.nio.zipfs.ZipFileSystem", "IndexNode", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.nio.zipfs.ZipFileSystem$IndexNode",
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
		"jdk.nio.zipfs.ZipFileSystem"
	};
	$loadClass(ZipFileSystem$IndexNode, name, initialize, &classInfo$$, ZipFileSystem$IndexNode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileSystem$IndexNode);
	});
	return class$;
}

$Class* ZipFileSystem$IndexNode::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk