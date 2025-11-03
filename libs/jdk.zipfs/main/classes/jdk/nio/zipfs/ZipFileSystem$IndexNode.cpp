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
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$ParentLookup = ::jdk::nio::zipfs::ZipFileSystem$ParentLookup;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$IndexNode_FieldInfo_[] = {
	{"name", "[B", nullptr, 0, $field(ZipFileSystem$IndexNode, name$)},
	{"hashcode", "I", nullptr, 0, $field(ZipFileSystem$IndexNode, hashcode)},
	{"isdir", "Z", nullptr, 0, $field(ZipFileSystem$IndexNode, isdir)},
	{"pos", "I", nullptr, 0, $field(ZipFileSystem$IndexNode, pos)},
	{"child", "Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, 0, $field(ZipFileSystem$IndexNode, child)},
	{"sibling", "Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, 0, $field(ZipFileSystem$IndexNode, sibling)},
	{"cachedKey", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljdk/nio/zipfs/ZipFileSystem$IndexNode;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem$IndexNode, cachedKey)},
	{}
};

$MethodInfo _ZipFileSystem$IndexNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZipFileSystem$IndexNode::*)()>(&ZipFileSystem$IndexNode::init$))},
	{"<init>", "([BZ)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$IndexNode::*)($bytes*,bool)>(&ZipFileSystem$IndexNode::init$))},
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$IndexNode::*)($bytes*,int32_t)>(&ZipFileSystem$IndexNode::init$))},
	{"<init>", "([BII)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$IndexNode::*)($bytes*,int32_t,int32_t)>(&ZipFileSystem$IndexNode::init$))},
	{"as", "([B)Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $FINAL, $method(static_cast<ZipFileSystem$IndexNode*(ZipFileSystem$IndexNode::*)($bytes*)>(&ZipFileSystem$IndexNode::as))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDir", "()Z", nullptr, 0},
	{"keyOf", "([B)Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $STATIC | $FINAL, $method(static_cast<ZipFileSystem$IndexNode*(*)($bytes*)>(&ZipFileSystem$IndexNode::keyOf))},
	{"name", "([B)V", nullptr, $FINAL, $method(static_cast<void(ZipFileSystem$IndexNode::*)($bytes*)>(&ZipFileSystem$IndexNode::name))},
	{"normalize", "([B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ZipFileSystem$IndexNode::*)($bytes*)>(&ZipFileSystem$IndexNode::normalize))},
	{"normalize", "([BI)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ZipFileSystem$IndexNode::*)($bytes*,int32_t)>(&ZipFileSystem$IndexNode::normalize))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ZipFileSystem$IndexNode_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$IndexNode", "jdk.nio.zipfs.ZipFileSystem", "IndexNode", $STATIC},
	{}
};

$ClassInfo _ZipFileSystem$IndexNode_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$IndexNode",
	"java.lang.Object",
	nullptr,
	_ZipFileSystem$IndexNode_FieldInfo_,
	_ZipFileSystem$IndexNode_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$IndexNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$IndexNode($Class* clazz) {
	return $of($alloc(ZipFileSystem$IndexNode));
}

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
	if (nlen > 0 && $nc(cen)->get(noff) == u'/') {
		$set(this, name$, $Arrays::copyOfRange(cen, noff, noff + nlen));
	} else {
		$set(this, name$, $new($bytes, nlen + 1));
		$System::arraycopy(cen, noff, this->name$, 1, nlen);
		$nc(this->name$)->set(0, (int8_t)u'/');
	}
	name($(normalize(this->name$)));
	this->pos = pos;
}

$bytes* ZipFileSystem$IndexNode::normalize($bytes* path) {
	int32_t len = $nc(path)->length;
	if (len == 0) {
		return path;
	}
	int8_t prevC = (int8_t)0;
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
	int8_t prevC = (int8_t)0;
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
	$var(ZipFileSystem$IndexNode, key, $cast(ZipFileSystem$IndexNode, $nc(ZipFileSystem$IndexNode::cachedKey)->get()));
	if (key == nullptr) {
		$assign(key, $new(ZipFileSystem$IndexNode, name, -1));
		$nc(ZipFileSystem$IndexNode::cachedKey)->set(key);
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
		return $nc(($cast($ZipFileSystem$ParentLookup, other)))->equals(this);
	}
	return $Arrays::equals(this->name$, $nc(($cast(ZipFileSystem$IndexNode, other)))->name$);
}

int32_t ZipFileSystem$IndexNode::hashCode() {
	return this->hashcode;
}

$String* ZipFileSystem$IndexNode::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$$new($String, this->name$), (this->isdir ? " (dir)"_s : " "_s), ", index: "_s, $$str(this->pos)});
}

void clinit$ZipFileSystem$IndexNode($Class* class$) {
	$assignStatic(ZipFileSystem$IndexNode::cachedKey, $new($ThreadLocal));
}

ZipFileSystem$IndexNode::ZipFileSystem$IndexNode() {
}

$Class* ZipFileSystem$IndexNode::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$IndexNode, name, initialize, &_ZipFileSystem$IndexNode_ClassInfo_, clinit$ZipFileSystem$IndexNode, allocate$ZipFileSystem$IndexNode);
	return class$;
}

$Class* ZipFileSystem$IndexNode::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk