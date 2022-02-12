﻿#pragma once

#include "Device.h"
#include "Resource.h"

class Surface : public Resource
{
public:
    Surface(Device* device, ID3D12Resource* resource);
    Surface(Device* device, D3D12MA::Allocation* allocation);

    virtual HRESULT GetContainer(const IID& riid, void** ppContainer);
    virtual HRESULT GetDesc(D3DSURFACE_DESC* pDesc);
    virtual HRESULT LockRect(D3DLOCKED_RECT* pLockedRect, const RECT* pRect, DWORD Flags);
    virtual HRESULT UnlockRect();
    virtual HRESULT GetDC(HDC* phdc);
    virtual HRESULT ReleaseDC(HDC hdc);
};
