#ifndef CGO_GODOT_GO_GDEXTENSION_WRAPPER_H
#define CGO_GODOT_GO_GDEXTENSION_WRAPPER_H


/*------------------------------------------------------------------------------
//   This code was generated by template ffi_wrapper.c.tmpl.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated. Any updates should be done in
//   "ffi_wrapper.h.tmpl" so they can be included in the generated
//   code.
//----------------------------------------------------------------------------*/
#include "gdextension_spx_codegen_header.h"

/* Go cannot call C function pointers directly, so we must generate C wrapper code to call the functions. */

inline void cgo_callfn_GDExtensionSpxGlobalRegisterCallbacks(const GDExtensionSpxGlobalRegisterCallbacks fn, GDExtensionSpxCallbackInfoPtr callback_ptr) {
	 fn(callback_ptr);
}
inline GdVec2 cgo_callfn_GDExtensionSpxInputGetMousePos(const GDExtensionSpxInputGetMousePos fn) {
	return fn();
}
inline GdBool cgo_callfn_GDExtensionSpxInputGetMouseState(const GDExtensionSpxInputGetMouseState fn, GdInt obj) {
	return fn(obj);
}
inline GdInt cgo_callfn_GDExtensionSpxInputGetKeyState(const GDExtensionSpxInputGetKeyState fn, GdInt key) {
	return fn(key);
}
inline GdFloat cgo_callfn_GDExtensionSpxInputGetAxis(const GDExtensionSpxInputGetAxis fn, GdString axis) {
	return fn(axis);
}
inline GdBool cgo_callfn_GDExtensionSpxInputIsActionPressed(const GDExtensionSpxInputIsActionPressed fn, GdString action) {
	return fn(action);
}
inline GdBool cgo_callfn_GDExtensionSpxInputIsActionJustPressed(const GDExtensionSpxInputIsActionJustPressed fn, GdString action) {
	return fn(action);
}
inline GdBool cgo_callfn_GDExtensionSpxInputIsActionJustReleased(const GDExtensionSpxInputIsActionJustReleased fn, GdString action) {
	return fn(action);
}
inline void cgo_callfn_GDExtensionSpxAudioPlayAudio(const GDExtensionSpxAudioPlayAudio fn, GdString path) {
	 fn(path);
}
inline void cgo_callfn_GDExtensionSpxAudioSetAudioVolume(const GDExtensionSpxAudioSetAudioVolume fn, GdFloat volume) {
	 fn(volume);
}
inline GdFloat cgo_callfn_GDExtensionSpxAudioGetAudioVolume(const GDExtensionSpxAudioGetAudioVolume fn) {
	return fn();
}
inline GdBool cgo_callfn_GDExtensionSpxAudioIsMusicPlaying(const GDExtensionSpxAudioIsMusicPlaying fn) {
	return fn();
}
inline void cgo_callfn_GDExtensionSpxAudioPlayMusic(const GDExtensionSpxAudioPlayMusic fn, GdString path) {
	 fn(path);
}
inline void cgo_callfn_GDExtensionSpxAudioSetMusicVolume(const GDExtensionSpxAudioSetMusicVolume fn, GdFloat volume) {
	 fn(volume);
}
inline GdFloat cgo_callfn_GDExtensionSpxAudioGetMusicVolume(const GDExtensionSpxAudioGetMusicVolume fn) {
	return fn();
}
inline void cgo_callfn_GDExtensionSpxAudioPauseMusic(const GDExtensionSpxAudioPauseMusic fn) {
	 fn();
}
inline void cgo_callfn_GDExtensionSpxAudioResumeMusic(const GDExtensionSpxAudioResumeMusic fn) {
	 fn();
}
inline GdFloat cgo_callfn_GDExtensionSpxAudioGetMusicTimer(const GDExtensionSpxAudioGetMusicTimer fn) {
	return fn();
}
inline void cgo_callfn_GDExtensionSpxAudioSetMusicTimer(const GDExtensionSpxAudioSetMusicTimer fn, GdFloat time) {
	 fn(time);
}
inline void cgo_callfn_GDExtensionSpxPhysicSetGravity(const GDExtensionSpxPhysicSetGravity fn, GdFloat gravity) {
	 fn(gravity);
}
inline GdFloat cgo_callfn_GDExtensionSpxPhysicGetGravity(const GDExtensionSpxPhysicGetGravity fn) {
	return fn();
}
inline void cgo_callfn_GDExtensionSpxPhysicSetVelocity(const GDExtensionSpxPhysicSetVelocity fn, GdObj obj, GdVec2 velocity) {
	 fn(obj, velocity);
}
inline GdVec2 cgo_callfn_GDExtensionSpxPhysicGetVelocity(const GDExtensionSpxPhysicGetVelocity fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxPhysicSetMass(const GDExtensionSpxPhysicSetMass fn, GdObj obj, GdFloat mass) {
	 fn(obj, mass);
}
inline GdFloat cgo_callfn_GDExtensionSpxPhysicGetMass(const GDExtensionSpxPhysicGetMass fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxPhysicAddForce(const GDExtensionSpxPhysicAddForce fn, GdObj obj, GdVec2 force) {
	 fn(obj, force);
}
inline void cgo_callfn_GDExtensionSpxPhysicAddImpulse(const GDExtensionSpxPhysicAddImpulse fn, GdObj obj, GdVec2 impulse) {
	 fn(obj, impulse);
}
inline void cgo_callfn_GDExtensionSpxPhysicSetCollisionLayer(const GDExtensionSpxPhysicSetCollisionLayer fn, GdObj obj, GdInt layer) {
	 fn(obj, layer);
}
inline GdInt cgo_callfn_GDExtensionSpxPhysicGetCollisionLayer(const GDExtensionSpxPhysicGetCollisionLayer fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxPhysicSetCollisionMask(const GDExtensionSpxPhysicSetCollisionMask fn, GdObj obj, GdInt mask) {
	 fn(obj, mask);
}
inline GdInt cgo_callfn_GDExtensionSpxPhysicGetCollisionMask(const GDExtensionSpxPhysicGetCollisionMask fn, GdObj obj) {
	return fn(obj);
}
inline GdInt cgo_callfn_GDExtensionSpxPhysicGetColliderType(const GDExtensionSpxPhysicGetColliderType fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxPhysicAddColliderRect(const GDExtensionSpxPhysicAddColliderRect fn, GdObj obj, GdVec2 center, GdVec2 size) {
	 fn(obj, center, size);
}
inline void cgo_callfn_GDExtensionSpxPhysicAddColliderCircle(const GDExtensionSpxPhysicAddColliderCircle fn, GdObj obj, GdVec2 center, GdFloat radius) {
	 fn(obj, center, radius);
}
inline void cgo_callfn_GDExtensionSpxPhysicAddColliderCapsule(const GDExtensionSpxPhysicAddColliderCapsule fn, GdObj obj, GdVec2 center, GdVec2 size) {
	 fn(obj, center, size);
}
inline void cgo_callfn_GDExtensionSpxPhysicSetTrigger(const GDExtensionSpxPhysicSetTrigger fn, GdObj obj, GdBool trigger) {
	 fn(obj, trigger);
}
inline GdBool cgo_callfn_GDExtensionSpxPhysicIsTrigger(const GDExtensionSpxPhysicIsTrigger fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxPhysicSetCollisionEnabled(const GDExtensionSpxPhysicSetCollisionEnabled fn, GdObj obj, GdBool enabled) {
	 fn(obj, enabled);
}
inline GdBool cgo_callfn_GDExtensionSpxPhysicIsCollisionEnabled(const GDExtensionSpxPhysicIsCollisionEnabled fn, GdObj obj) {
	return fn(obj);
}
inline GdObj cgo_callfn_GDExtensionSpxSpriteCreateSprite(const GDExtensionSpxSpriteCreateSprite fn, GdString path) {
	return fn(path);
}
inline GdObj cgo_callfn_GDExtensionSpxSpriteCloneSprite(const GDExtensionSpxSpriteCloneSprite fn, GdObj obj) {
	return fn(obj);
}
inline GdBool cgo_callfn_GDExtensionSpxSpriteDestroySprite(const GDExtensionSpxSpriteDestroySprite fn, GdObj obj) {
	return fn(obj);
}
inline GdBool cgo_callfn_GDExtensionSpxSpriteIsSpriteAlive(const GDExtensionSpxSpriteIsSpriteAlive fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxSpriteSetPosition(const GDExtensionSpxSpriteSetPosition fn, GdObj obj, GdVec2 pos) {
	 fn(obj, pos);
}
inline void cgo_callfn_GDExtensionSpxSpriteSetRotation(const GDExtensionSpxSpriteSetRotation fn, GdObj obj, GdFloat rot) {
	 fn(obj, rot);
}
inline void cgo_callfn_GDExtensionSpxSpriteSetScale(const GDExtensionSpxSpriteSetScale fn, GdObj obj, GdVec2 scale) {
	 fn(obj, scale);
}
inline GdVec2 cgo_callfn_GDExtensionSpxSpriteGetPosition(const GDExtensionSpxSpriteGetPosition fn, GdObj obj) {
	return fn(obj);
}
inline GdFloat cgo_callfn_GDExtensionSpxSpriteGetRotation(const GDExtensionSpxSpriteGetRotation fn, GdObj obj) {
	return fn(obj);
}
inline GdVec2 cgo_callfn_GDExtensionSpxSpriteGetScale(const GDExtensionSpxSpriteGetScale fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxSpriteSetColor(const GDExtensionSpxSpriteSetColor fn, GdObj obj, GdColor color) {
	 fn(obj, color);
}
inline GdColor cgo_callfn_GDExtensionSpxSpriteGetColor(const GDExtensionSpxSpriteGetColor fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxSpriteUpdateTexture(const GDExtensionSpxSpriteUpdateTexture fn, GdObj obj, GdString path) {
	 fn(obj, path);
}
inline GdString cgo_callfn_GDExtensionSpxSpriteGetTexture(const GDExtensionSpxSpriteGetTexture fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxSpriteSetVisible(const GDExtensionSpxSpriteSetVisible fn, GdObj obj, GdBool visible) {
	 fn(obj, visible);
}
inline GdBool cgo_callfn_GDExtensionSpxSpriteGetVisible(const GDExtensionSpxSpriteGetVisible fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxSpriteUpdateZIndex(const GDExtensionSpxSpriteUpdateZIndex fn, GdObj obj, GdInt z) {
	 fn(obj, z);
}
inline GdObj cgo_callfn_GDExtensionSpxUICreateButton(const GDExtensionSpxUICreateButton fn, GdString path, GdRect2 rect, GdString text) {
	return fn(path, rect, text);
}
inline GdObj cgo_callfn_GDExtensionSpxUICreateLabel(const GDExtensionSpxUICreateLabel fn, GdString path, GdRect2 rect, GdString text) {
	return fn(path, rect, text);
}
inline GdObj cgo_callfn_GDExtensionSpxUICreateImage(const GDExtensionSpxUICreateImage fn, GdString path, GdRect2 rect, GdColor color) {
	return fn(path, rect, color);
}
inline GdObj cgo_callfn_GDExtensionSpxUICreateSlider(const GDExtensionSpxUICreateSlider fn, GdString path, GdRect2 rect, GdFloat value) {
	return fn(path, rect, value);
}
inline GdObj cgo_callfn_GDExtensionSpxUICreateToggle(const GDExtensionSpxUICreateToggle fn, GdString path, GdRect2 rect, GdBool value) {
	return fn(path, rect, value);
}
inline GdObj cgo_callfn_GDExtensionSpxUICreateInput(const GDExtensionSpxUICreateInput fn, GdString path, GdRect2 rect, GdString text) {
	return fn(path, rect, text);
}
inline GdInt cgo_callfn_GDExtensionSpxUIGetType(const GDExtensionSpxUIGetType fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxUISetInteractable(const GDExtensionSpxUISetInteractable fn, GdObj obj, GdBool interactable) {
	 fn(obj, interactable);
}
inline GdBool cgo_callfn_GDExtensionSpxUIGetInteractable(const GDExtensionSpxUIGetInteractable fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxUISetText(const GDExtensionSpxUISetText fn, GdObj obj, GdString text) {
	 fn(obj, text);
}
inline GdString cgo_callfn_GDExtensionSpxUIGetText(const GDExtensionSpxUIGetText fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxUISetRect(const GDExtensionSpxUISetRect fn, GdObj obj, GdRect2 rect) {
	 fn(obj, rect);
}
inline GdRect2 cgo_callfn_GDExtensionSpxUIGetRect(const GDExtensionSpxUIGetRect fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxUISetColor(const GDExtensionSpxUISetColor fn, GdObj obj, GdColor color) {
	 fn(obj, color);
}
inline GdColor cgo_callfn_GDExtensionSpxUIGetColor(const GDExtensionSpxUIGetColor fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxUISetFontSize(const GDExtensionSpxUISetFontSize fn, GdObj obj, GdFloat size) {
	 fn(obj, size);
}
inline GdFloat cgo_callfn_GDExtensionSpxUIGetFontSize(const GDExtensionSpxUIGetFontSize fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxUISetVisible(const GDExtensionSpxUISetVisible fn, GdObj obj, GdBool visible) {
	 fn(obj, visible);
}
inline GdBool cgo_callfn_GDExtensionSpxUIGetVisible(const GDExtensionSpxUIGetVisible fn, GdObj obj) {
	return fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnEngineStart(const GDExtensionSpxCallbackOnEngineStart fn) {
	 fn();
}
inline void cgo_callfn_GDExtensionSpxCallbackOnEngineUpdate(const GDExtensionSpxCallbackOnEngineUpdate fn, GdFloat delta) {
	 fn(delta);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnEngineDestroy(const GDExtensionSpxCallbackOnEngineDestroy fn) {
	 fn();
}
inline void cgo_callfn_GDExtensionSpxCallbackOnSpriteReady(const GDExtensionSpxCallbackOnSpriteReady fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnSpriteUpdated(const GDExtensionSpxCallbackOnSpriteUpdated fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnSpriteDestroyed(const GDExtensionSpxCallbackOnSpriteDestroyed fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnMousePressed(const GDExtensionSpxCallbackOnMousePressed fn, GdInt keyid) {
	 fn(keyid);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnMouseReleased(const GDExtensionSpxCallbackOnMouseReleased fn, GdInt keyid) {
	 fn(keyid);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnKeyPressed(const GDExtensionSpxCallbackOnKeyPressed fn, GdInt keyid) {
	 fn(keyid);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnKeyReleased(const GDExtensionSpxCallbackOnKeyReleased fn, GdInt keyid) {
	 fn(keyid);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnActionPressed(const GDExtensionSpxCallbackOnActionPressed fn, GdString action_name) {
	 fn(action_name);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnActionJustPressed(const GDExtensionSpxCallbackOnActionJustPressed fn, GdString action_name) {
	 fn(action_name);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnActionJustReleased(const GDExtensionSpxCallbackOnActionJustReleased fn, GdString action_name) {
	 fn(action_name);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnAxisChanged(const GDExtensionSpxCallbackOnAxisChanged fn, GdString action_name, GdFloat value) {
	 fn(action_name, value);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnCollisionEnter(const GDExtensionSpxCallbackOnCollisionEnter fn, GdInt self_id, GdInt other_id) {
	 fn(self_id, other_id);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnCollisionStay(const GDExtensionSpxCallbackOnCollisionStay fn, GdInt self_id, GdInt other_id) {
	 fn(self_id, other_id);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnCollisionExit(const GDExtensionSpxCallbackOnCollisionExit fn, GdInt self_id, GdInt other_id) {
	 fn(self_id, other_id);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnTriggerEnter(const GDExtensionSpxCallbackOnTriggerEnter fn, GdInt self_id, GdInt other_id) {
	 fn(self_id, other_id);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnTriggerStay(const GDExtensionSpxCallbackOnTriggerStay fn, GdInt self_id, GdInt other_id) {
	 fn(self_id, other_id);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnTriggerExit(const GDExtensionSpxCallbackOnTriggerExit fn, GdInt self_id, GdInt other_id) {
	 fn(self_id, other_id);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnUIPressed(const GDExtensionSpxCallbackOnUIPressed fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnUIReleased(const GDExtensionSpxCallbackOnUIReleased fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnUIHovered(const GDExtensionSpxCallbackOnUIHovered fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnUIClicked(const GDExtensionSpxCallbackOnUIClicked fn, GdObj obj) {
	 fn(obj);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnUIToggle(const GDExtensionSpxCallbackOnUIToggle fn, GdObj obj, GdBool is_on) {
	 fn(obj, is_on);
}
inline void cgo_callfn_GDExtensionSpxCallbackOnUITextChanged(const GDExtensionSpxCallbackOnUITextChanged fn, GdObj obj, GdString text) {
	 fn(obj, text);
}
inline void cgo_callfn_GDExtensionSpxStringNewWithLatin1Chars(const GDExtensionSpxStringNewWithLatin1Chars fn, GDExtensionUninitializedStringPtr r_dest, const char *  p_contents) {
	 fn(r_dest, p_contents);
}
inline void cgo_callfn_GDExtensionSpxStringNewWithUtf8Chars(const GDExtensionSpxStringNewWithUtf8Chars fn, GDExtensionUninitializedStringPtr r_dest, const char *  p_contents) {
	 fn(r_dest, p_contents);
}
inline void cgo_callfn_GDExtensionSpxStringNewWithLatin1CharsAndLen(const GDExtensionSpxStringNewWithLatin1CharsAndLen fn, GDExtensionUninitializedStringPtr r_dest, const char *  p_contents, GdInt p_size) {
	 fn(r_dest, p_contents, p_size);
}
inline void cgo_callfn_GDExtensionSpxStringNewWithUtf8CharsAndLen(const GDExtensionSpxStringNewWithUtf8CharsAndLen fn, GDExtensionUninitializedStringPtr r_dest, const char *  p_contents, GdInt p_size) {
	 fn(r_dest, p_contents, p_size);
}
inline GdInt cgo_callfn_GDExtensionSpxStringToLatin1Chars(const GDExtensionSpxStringToLatin1Chars fn, GDExtensionConstStringPtr p_self, char *  r_text, GdInt p_max_write_length) {
	return fn(p_self, r_text, p_max_write_length);
}
inline GdInt cgo_callfn_GDExtensionSpxStringToUtf8Chars(const GDExtensionSpxStringToUtf8Chars fn, GDExtensionConstStringPtr p_self, char *  r_text, GdInt p_max_write_length) {
	return fn(p_self, r_text, p_max_write_length);
}
inline GDExtensionPtrConstructor cgo_callfn_GDExtensionSpxVariantGetPtrConstructor(const GDExtensionSpxVariantGetPtrConstructor fn, GDExtensionVariantType p_type, int32_t p_constructor) {
	return fn(p_type, p_constructor);
}
inline GDExtensionPtrDestructor cgo_callfn_GDExtensionSpxVariantGetPtrDestructor(const GDExtensionSpxVariantGetPtrDestructor fn, GDExtensionVariantType p_type) {
	return fn(p_type);
}
#endif