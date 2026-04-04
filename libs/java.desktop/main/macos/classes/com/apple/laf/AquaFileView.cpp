#include <com/apple/laf/AquaFileView.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileView$1.h>
#include <com/apple/laf/AquaFileView$2.h>
#include <com/apple/laf/AquaFileView$3.h>
#include <com/apple/laf/AquaFileView$FileInfo.h>
#include <com/apple/laf/AquaIcon$FileIcon.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/io/File.h>
#include <java/security/AccessController.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <jcpp.h>

#undef DEBUG
#undef FALSE
#undef MAX_CACHED_ENTRIES
#undef TRUE
#undef UNINITALIZED_LS_INFO

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileView$1 = ::com::apple::laf::AquaFileView$1;
using $AquaFileView$2 = ::com::apple::laf::AquaFileView$2;
using $AquaFileView$3 = ::com::apple::laf::AquaFileView$3;
using $AquaFileView$FileInfo = ::com::apple::laf::AquaFileView$FileInfo;
using $AquaIcon$FileIcon = ::com::apple::laf::AquaIcon$FileIcon;
using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Icon = ::javax::swing::Icon;
using $FileView = ::javax::swing::filechooser::FileView;

namespace com {
	namespace apple {
		namespace laf {

$AquaUtils$RecyclableSingleton* AquaFileView::machineName = nullptr;

$String* AquaFileView::getNativePathToSharedJDKBundle() {
	$init(AquaFileView);
	$prepareNativeStatic(getNativePathToSharedJDKBundle, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$String* AquaFileView::getNativeMachineName() {
	$init(AquaFileView);
	$prepareNativeStatic(getNativeMachineName, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$String* AquaFileView::getNativeDisplayName($bytes* pathBytes, bool isDirectory) {
	$init(AquaFileView);
	$prepareNativeStatic(getNativeDisplayName, $String*, $bytes* pathBytes, bool isDirectory);
	$var($String, $ret, $invokeNativeStaticObject(pathBytes, isDirectory));
	$finishNativeStatic();
	return $ret;
}

int32_t AquaFileView::getNativeLSInfo($bytes* pathBytes, bool isDirectory) {
	$init(AquaFileView);
	$prepareNativeStatic(getNativeLSInfo, int32_t, $bytes* pathBytes, bool isDirectory);
	int32_t $ret = $invokeNativeStatic(pathBytes, isDirectory);
	$finishNativeStatic();
	return $ret;
}

$String* AquaFileView::getNativePathForResolvedAlias($bytes* absolutePath, bool isDirectory) {
	$init(AquaFileView);
	$prepareNativeStatic(getNativePathForResolvedAlias, $String*, $bytes* absolutePath, bool isDirectory);
	$var($String, $ret, $invokeNativeStaticObject(absolutePath, isDirectory));
	$finishNativeStatic();
	return $ret;
}

$String* AquaFileView::getMachineName() {
	$init(AquaFileView);
	return $cast($String, AquaFileView::machineName->get());
}

$String* AquaFileView::getPathToRunningJDKBundle() {
	$init(AquaFileView);
	return ""_s;
}

$String* AquaFileView::getPathToSharedJDKBundle() {
	$init(AquaFileView);
	return getNativePathToSharedJDKBundle();
}

$AquaFileView$FileInfo* AquaFileView::getFileInfoFor($File* file) {
	$useLocalObjectStack();
	$var($AquaFileView$FileInfo, info, $cast($AquaFileView$FileInfo, $nc(this->cache)->get(file)));
	if (info != nullptr) {
		return info;
	}
	$var($AquaFileView$FileInfo, newInfo, $new($AquaFileView$FileInfo, file));
	this->cache->put(file, newInfo);
	return newInfo;
}

void AquaFileView::init$($AquaFileChooserUI* fileChooserUI) {
	$FileView::init$();
	$set(this, cache, $new($AquaFileView$3, this));
	$set(this, fFileChooserUI, fileChooserUI);
}

$String* AquaFileView::_directoryDescriptionText() {
	return $nc(this->fFileChooserUI)->directoryDescriptionText;
}

$String* AquaFileView::_fileDescriptionText() {
	return $nc(this->fFileChooserUI)->fileDescriptionText;
}

bool AquaFileView::_packageIsTraversable() {
	return $nc(this->fFileChooserUI)->fPackageIsTraversable == $AquaFileChooserUI::kOpenAlways;
}

bool AquaFileView::_applicationIsTraversable() {
	return $nc(this->fFileChooserUI)->fApplicationIsTraversable == $AquaFileChooserUI::kOpenAlways;
}

$String* AquaFileView::getName($File* f) {
	$useLocalObjectStack();
	$var($AquaFileView$FileInfo, info, getFileInfoFor(f));
	if ($nc(info)->displayName != nullptr) {
		return info->displayName;
	}
	$var($String, nativeDisplayName, getNativeDisplayName(info->pathBytes, info->isDirectory));
	if (nativeDisplayName != nullptr) {
		$set(info, displayName, nativeDisplayName);
		return nativeDisplayName;
	}
	$var($String, displayName, $nc(f)->getName());
	bool var$0 = f->isDirectory();
	if (var$0 && $$nc($$nc($nc(this->fFileChooserUI)->getFileChooser())->getFileSystemView())->isRoot(f)) {
		$var($String, localMachineName, getMachineName());
		$set(info, displayName, localMachineName);
		return localMachineName;
	}
	$set(info, displayName, displayName);
	return displayName;
}

$String* AquaFileView::getDescription($File* f) {
	return $nc(f)->getName();
}

$String* AquaFileView::getTypeDescription($File* f) {
	if ($nc(f)->isDirectory()) {
		return _directoryDescriptionText();
	}
	return _fileDescriptionText();
}

$Icon* AquaFileView::getIcon($File* f) {
	$useLocalObjectStack();
	$var($AquaFileView$FileInfo, info, getFileInfoFor(f));
	if ($nc(info)->icon != nullptr) {
		return info->icon;
	}
	if (f == nullptr) {
		$set(info, icon, $AquaIcon$SystemIcon::getDocumentIconUIResource());
	} else {
		$var($AquaIcon$FileIcon, fileIcon, $new($AquaIcon$FileIcon, f));
		$set(info, icon, fileIcon);
		if (!fileIcon->hasIconRef()) {
			if (f->isDirectory()) {
				if ($$nc($$nc($nc(this->fFileChooserUI)->getFileChooser())->getFileSystemView())->isRoot(f)) {
					$set(info, icon, $AquaIcon$SystemIcon::getComputerIconUIResource());
				} else {
					bool var$0 = f->getParent() == nullptr;
					if (var$0 || $$nc(f->getParent())->equals("/"_s)) {
						$set(info, icon, $AquaIcon$SystemIcon::getHardDriveIconUIResource());
					} else {
						$set(info, icon, $AquaIcon$SystemIcon::getFolderIconUIResource());
					}
				}
			} else {
				$set(info, icon, $AquaIcon$SystemIcon::getDocumentIconUIResource());
			}
		}
	}
	return info->icon;
}

$Boolean* AquaFileView::isTraversable($File* f) {
	if ($nc(f)->isDirectory()) {
		bool var$0 = _packageIsTraversable();
		if (var$0 && _applicationIsTraversable()) {
			return $Boolean::TRUE;
		} else {
			bool var$1 = !_packageIsTraversable();
			if (var$1 && !_applicationIsTraversable()) {
				bool var$2 = isPackage(f);
				if (var$2 || isApplication(f)) {
					return $Boolean::FALSE;
				}
			} else if (!_applicationIsTraversable()) {
				if (isApplication(f)) {
					return $Boolean::FALSE;
				}
			} else if (!_packageIsTraversable()) {
				bool var$3 = isPackage(f);
				if (var$3 && !isApplication(f)) {
					return $Boolean::FALSE;
				}
			}
		}
		return $Boolean::TRUE;
	}
	if (isAlias(f)) {
		$var($File, realFile, resolveAlias(f));
		return $nc(realFile)->isDirectory() ? $Boolean::TRUE : $Boolean::FALSE;
	}
	return $Boolean::FALSE;
}

int32_t AquaFileView::getLSInfoFor($File* f) {
	$var($AquaFileView$FileInfo, info, getFileInfoFor(f));
	if ($nc(info)->launchServicesInfo == AquaFileView::UNINITALIZED_LS_INFO) {
		info->launchServicesInfo = getNativeLSInfo(info->pathBytes, info->isDirectory);
	}
	return info->launchServicesInfo;
}

bool AquaFileView::isAlias($File* f) {
	int32_t lsInfo = getLSInfoFor(f);
	return ((lsInfo & AquaFileView::kLSItemInfoIsAliasFile) != 0) && ((lsInfo & AquaFileView::kLSItemInfoIsSymlink) == 0);
}

bool AquaFileView::isApplication($File* f) {
	return (getLSInfoFor(f) & AquaFileView::kLSItemInfoIsApplication) != 0;
}

bool AquaFileView::isPackage($File* f) {
	return (getLSInfoFor(f) & AquaFileView::kLSItemInfoIsPackage) != 0;
}

$File* AquaFileView::resolveAlias($File* mFile) {
	$useLocalObjectStack();
	bool var$0 = $nc(mFile)->exists();
	if (var$0 && !isAlias(mFile)) {
		;
		return mFile;
	}
	$var($LinkedList, components, getPathComponents(mFile));
	if (components == nullptr) {
		;
		return mFile;
	}
	$var($File, file, $new($File, "/"_s));
	{
		$var($Iterator, i$, $nc(components)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, nextComponent, $cast($String, i$->next()));
			{
				$assign(file, $new($File, file, nextComponent));
				$var($AquaFileView$FileInfo, info, getFileInfoFor(file));
				if (!file->exists()) {
					return mFile;
				}
				if (isAlias(file)) {
					$var($String, path, getNativePathForResolvedAlias($nc(info)->pathBytes, $nc(info)->isDirectory));
					if (path == nullptr) {
						return mFile;
					}
					$assign(file, $new($File, path));
				}
			}
		}
	}
	return file;
}

$LinkedList* AquaFileView::getPathComponents($File* mFile) {
	$init(AquaFileView);
	$useLocalObjectStack();
	$var($LinkedList, componentList, $new($LinkedList));
	$var($String, parent, nullptr);
	$var($File, file, $new($File, $($nc(mFile)->getAbsolutePath())));
	componentList->add(0, $(file->getName()));
	while (($assign(parent, file->getParent())) != nullptr) {
		$assign(file, $new($File, parent));
		componentList->add(0, $(file->getName()));
	}
	return componentList;
}

void AquaFileView::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($$new($AquaFileView$1));
	}
	$assignStatic(AquaFileView::machineName, $new($AquaFileView$2));
}

AquaFileView::AquaFileView() {
}

$Class* AquaFileView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileView, DEBUG)},
		{"UNINITALIZED_LS_INFO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileView, UNINITALIZED_LS_INFO)},
		{"kLSItemInfoIsPlainFile", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsPlainFile)},
		{"kLSItemInfoIsPackage", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsPackage)},
		{"kLSItemInfoIsApplication", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsApplication)},
		{"kLSItemInfoIsContainer", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsContainer)},
		{"kLSItemInfoIsAliasFile", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsAliasFile)},
		{"kLSItemInfoIsSymlink", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsSymlink)},
		{"kLSItemInfoIsInvisible", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsInvisible)},
		{"kLSItemInfoIsNativeApp", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsNativeApp)},
		{"kLSItemInfoIsClassicApp", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsClassicApp)},
		{"kLSItemInfoAppPrefersNative", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoAppPrefersNative)},
		{"kLSItemInfoAppPrefersClassic", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoAppPrefersClassic)},
		{"kLSItemInfoAppIsScriptable", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoAppIsScriptable)},
		{"kLSItemInfoIsVolume", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoIsVolume)},
		{"kLSItemInfoExtensionIsHidden", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, kLSItemInfoExtensionIsHidden)},
		{"machineName", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFileView, machineName)},
		{"MAX_CACHED_ENTRIES", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileView, MAX_CACHED_ENTRIES)},
		{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/io/File;Lcom/apple/laf/AquaFileView$FileInfo;>;", $PROTECTED | $FINAL, $field(AquaFileView, cache)},
		{"fFileChooserUI", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL, $field(AquaFileView, fFileChooserUI)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PUBLIC, $method(AquaFileView, init$, void, $AquaFileChooserUI*)},
		{"_applicationIsTraversable", "()Z", nullptr, 0, $virtualMethod(AquaFileView, _applicationIsTraversable, bool)},
		{"_directoryDescriptionText", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileView, _directoryDescriptionText, $String*)},
		{"_fileDescriptionText", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AquaFileView, _fileDescriptionText, $String*)},
		{"_packageIsTraversable", "()Z", nullptr, 0, $virtualMethod(AquaFileView, _packageIsTraversable, bool)},
		{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaFileView, getDescription, $String*, $File*)},
		{"getFileInfoFor", "(Ljava/io/File;)Lcom/apple/laf/AquaFileView$FileInfo;", nullptr, 0, $virtualMethod(AquaFileView, getFileInfoFor, $AquaFileView$FileInfo*, $File*)},
		{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(AquaFileView, getIcon, $Icon*, $File*)},
		{"getLSInfoFor", "(Ljava/io/File;)I", nullptr, 0, $virtualMethod(AquaFileView, getLSInfoFor, int32_t, $File*)},
		{"getMachineName", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AquaFileView, getMachineName, $String*)},
		{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaFileView, getName, $String*, $File*)},
		{"getNativeDisplayName", "([BZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AquaFileView, getNativeDisplayName, $String*, $bytes*, bool)},
		{"getNativeLSInfo", "([BZ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AquaFileView, getNativeLSInfo, int32_t, $bytes*, bool)},
		{"getNativeMachineName", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AquaFileView, getNativeMachineName, $String*)},
		{"getNativePathForResolvedAlias", "([BZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AquaFileView, getNativePathForResolvedAlias, $String*, $bytes*, bool)},
		{"getNativePathToSharedJDKBundle", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(AquaFileView, getNativePathToSharedJDKBundle, $String*)},
		{"getPathComponents", "(Ljava/io/File;)Ljava/util/LinkedList;", "(Ljava/io/File;)Ljava/util/LinkedList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(AquaFileView, getPathComponents, $LinkedList*, $File*)},
		{"getPathToRunningJDKBundle", "()Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaFileView, getPathToRunningJDKBundle, $String*)},
		{"getPathToSharedJDKBundle", "()Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaFileView, getPathToSharedJDKBundle, $String*)},
		{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaFileView, getTypeDescription, $String*, $File*)},
		{"isAlias", "(Ljava/io/File;)Z", nullptr, 0, $virtualMethod(AquaFileView, isAlias, bool, $File*)},
		{"isApplication", "(Ljava/io/File;)Z", nullptr, 0, $virtualMethod(AquaFileView, isApplication, bool, $File*)},
		{"isPackage", "(Ljava/io/File;)Z", nullptr, 0, $virtualMethod(AquaFileView, isPackage, bool, $File*)},
		{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(AquaFileView, isTraversable, $Boolean*, $File*)},
		{"resolveAlias", "(Ljava/io/File;)Ljava/io/File;", nullptr, 0, $virtualMethod(AquaFileView, resolveAlias, $File*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileView$FileInfo", "com.apple.laf.AquaFileView", "FileInfo", $STATIC},
		{"com.apple.laf.AquaFileView$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaFileView$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaFileView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileView",
		"javax.swing.filechooser.FileView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileView$FileInfo,com.apple.laf.AquaFileView$3,com.apple.laf.AquaFileView$2,com.apple.laf.AquaFileView$1"
	};
	$loadClass(AquaFileView, name, initialize, &classInfo$$, AquaFileView::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileView);
	});
	return class$;
}

$Class* AquaFileView::class$ = nullptr;

		} // laf
	} // apple
} // com