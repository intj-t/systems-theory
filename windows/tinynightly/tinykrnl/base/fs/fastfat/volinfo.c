/*++

Copyright (c) Samuel Serapi�n, .   All rights reserved.

    THIS CODE AND INFORMATION IS PROVIDED UNDER THE TINYKRNL SHARED
    SOURCE LICENSE.  PLEASE READ THE FILE "LICENSE" IN THE TOP
    LEVEL DIRECTORY.

    Based on WDK sample source code (c) Microsoft Corporation.

Module Name:

    volinfo.c

Abstract:

    <FILLMEIN>

Environment:

    Kernel mode

Revision History:

     - Started Implementation - 12-Jun-06

--*/
#include "precomp.h"

#ifdef ALLOC_PRAGMA
#pragma alloc_text(PAGE, FatFsdQueryVolumeInformation)
#pragma alloc_text(PAGE, FatFsdSetVolumeInformation)
#endif

/*++
 * @name FatFsdQueryVolumeInformation
 *
 * The FatFsdQueryVolumeInformation routine FILLMEIN
 *
 * @param VolumeDeviceObject
 *        FILLMEIN
 *
 * @param Irp
 *        FILLMEIN
 *
 * @return NTSTATUS
 *
 * @remarks Documentation for this routine needs to be completed.
 *
 *--*/
NTSTATUS
FatFsdQueryVolumeInformation(IN PVOLUME_DEVICE_OBJECT VolumeDeviceObject,
                             IN PIRP Irp)
{
    //
    // FIXME: TODO
    //

    NtUnhandled();

    return STATUS_SUCCESS;
}

/*++
 * @name FatFsdSetVolumeInformation
 *
 * The fatFsdSetVolumeInformation routine FILLMEIN
 *
 * @param VolumeDeviceObject
 *        FILLMEIN
 *
 * @param Irp
 *        FILLMEIN
 *
 * @return NTSTATUS
 *
 * @remarks Documentation for this routine needs to be completed.
 *
 *--*/
NTSTATUS
FatFsdSetVolumeInformation(IN PVOLUME_DEVICE_OBJECT VolumeDeviceObject,
                           IN PIRP Irp)
{
    //
    // FIXME: TODO
    //

    NtUnhandled();

    return STATUS_SUCCESS;
}
