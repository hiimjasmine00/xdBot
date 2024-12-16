#include "practice_fixes.hpp"

PlayerData PlayerPracticeFixes::saveData(PlayerObject* player) {
    PlayerData data;

    #ifdef GEODE_IS_WINDOWS

    data.m_rotateObjectsRelated.insert(player->m_rotateObjectsRelated.begin(), player->m_rotateObjectsRelated.end());
    data.m_maybeRotatedObjectsMap.insert(player->m_maybeRotatedObjectsMap.begin(), player->m_maybeRotatedObjectsMap.end());
    data.m_touchedRings.insert(player->m_touchedRings.begin(), player->m_touchedRings.end());
    data.m_ringRelatedSet.insert(player->m_ringRelatedSet.begin(), player->m_ringRelatedSet.end());
    data.m_jumpPadRelated.insert(player->m_jumpPadRelated.begin(), player->m_jumpPadRelated.end());
    data.m_holdingButtons.insert(player->m_holdingButtons.begin(), player->m_holdingButtons.end());

    for (const auto& el : player->m_playerFollowFloats)
        data.m_playerFollowFloats.push_back(el);

    #else

    // data.m_jumpPadRelated = player->m_jumpPadRelated;
    // data.m_holdingButtons = player->m_holdingButtons;

    #endif

    data.position = player->getPosition();
    data.rotation = player->getRotation();
    data.m_holdingRight = player->m_holdingRight;
    data.m_holdingLeft = player->m_holdingLeft;
    data.m_mainLayer = player->m_mainLayer;
    data.m_wasTeleported = player->m_wasTeleported;
    data.m_fixGravityBug = player->m_fixGravityBug;
    data.m_reverseSync = player->m_reverseSync;
    data.m_yVelocityBeforeSlope = player->m_yVelocityBeforeSlope;
    data.m_dashX = player->m_dashX;
    data.m_dashY = player->m_dashY;
    data.m_dashAngle = player->m_dashAngle;
    data.m_dashStartTime = player->m_dashStartTime;
    data.m_dashRing = player->m_dashRing;
    data.m_slopeStartTime = player->m_slopeStartTime;
    data.m_justPlacedStreak = player->m_justPlacedStreak;
    data.m_maybeLastGroundObject = player->m_maybeLastGroundObject;
    data.m_collisionLogTop = player->m_collisionLogTop;
    data.m_collisionLogBottom = player->m_collisionLogBottom;
    data.m_collisionLogLeft = player->m_collisionLogLeft;
    data.m_collisionLogRight = player->m_collisionLogRight;
    data.m_lastCollisionBottom = player->m_lastCollisionBottom;
    data.m_lastCollisionTop = player->m_lastCollisionTop;
    data.m_lastCollisionLeft = player->m_lastCollisionLeft;
    data.m_lastCollisionRight = player->m_lastCollisionRight;
    data.m_unk50C = player->m_unk50C;
    data.m_unk510 = player->m_unk510;
    data.m_currentSlope2 = player->m_currentSlope2;
    data.m_preLastGroundObject = player->m_preLastGroundObject;
    data.m_slopeAngle = player->m_slopeAngle;
    data.m_slopeSlidingMaybeRotated = player->m_slopeSlidingMaybeRotated;
    data.m_quickCheckpointMode = player->m_quickCheckpointMode;
    data.m_collidedObject = player->m_collidedObject;
    data.m_lastGroundObject = player->m_lastGroundObject;
    data.m_collidingWithLeft = player->m_collidingWithLeft;
    data.m_collidingWithRight = player->m_collidingWithRight;
    data.m_maybeSavedPlayerFrame = player->m_maybeSavedPlayerFrame;
    data.m_scaleXRelated2 = player->m_scaleXRelated2;
    data.m_groundYVelocity = player->m_groundYVelocity;
    data.m_yVelocityRelated = player->m_yVelocityRelated;
    data.m_scaleXRelated3 = player->m_scaleXRelated3;
    data.m_scaleXRelated4 = player->m_scaleXRelated4;
    data.m_scaleXRelated5 = player->m_scaleXRelated5;
    data.m_isCollidingWithSlope = player->m_isCollidingWithSlope;
    data.m_isBallRotating = player->m_isBallRotating;
    data.m_unk669 = player->m_unk669;
    data.m_currentSlope3 = player->m_currentSlope3;
    data.m_currentSlope = player->m_currentSlope;
    data.unk_584 = player->unk_584;
    data.m_collidingWithSlopeId = player->m_collidingWithSlopeId;
    data.m_slopeFlipGravityRelated = player->m_slopeFlipGravityRelated;
    data.m_particleSystems = player->m_particleSystems;
    data.m_slopeAngleRadians = player->m_slopeAngleRadians;
    data.m_rotationSpeed = player->m_rotationSpeed;
    data.m_rotateSpeed = player->m_rotateSpeed;
    data.m_isRotating = player->m_isRotating;
    data.m_isBallRotating2 = player->m_isBallRotating2;
    data.m_hasGlow = player->m_hasGlow;
    data.m_isHidden = player->m_isHidden;
    data.m_speedMultiplier = player->m_speedMultiplier;
    data.m_yStart = player->m_yStart;
    data.m_gravity = player->m_gravity;
    data.m_trailingParticleLife = player->m_trailingParticleLife;
    data.m_unk648 = player->m_unk648;
    data.m_gameModeChangedTime = player->m_gameModeChangedTime;
    data.m_padRingRelated = player->m_padRingRelated;
    data.m_maybeReducedEffects = player->m_maybeReducedEffects;
    data.m_maybeIsFalling = player->m_maybeIsFalling;
    data.m_shouldTryPlacingCheckpoint = player->m_shouldTryPlacingCheckpoint;
    data.m_playEffects = player->m_playEffects;
    data.m_maybeCanRunIntoBlocks = player->m_maybeCanRunIntoBlocks;
    data.m_hasGroundParticles = player->m_hasGroundParticles;
    data.m_hasShipParticles = player->m_hasShipParticles;
    data.m_isOnGround3 = player->m_isOnGround3;
    data.m_checkpointTimeout = player->m_checkpointTimeout;
    data.m_lastCheckpointTime = player->m_lastCheckpointTime;
    data.m_lastJumpTime = player->m_lastJumpTime;
    data.m_lastFlipTime = player->m_lastFlipTime;
    data.m_flashTime = player->m_flashTime;
    data.m_flashRelated = player->m_flashRelated;
    data.m_flashRelated1 = player->m_flashRelated1;
    data.m_lastSpiderFlipTime = player->m_lastSpiderFlipTime;
    data.m_unkBool5 = player->m_unkBool5;
    data.m_maybeIsVehicleGlowing = player->m_maybeIsVehicleGlowing;
    data.m_gv0096 = player->m_gv0096;
    data.m_gv0100 = player->m_gv0100;
    data.m_accelerationOrSpeed = player->m_accelerationOrSpeed;
    data.m_snapDistance = player->m_snapDistance;
    data.m_ringJumpRelated = player->m_ringJumpRelated;
    data.m_objectSnappedTo = player->m_objectSnappedTo;
    data.m_pendingCheckpoint = player->m_pendingCheckpoint;
    data.m_onFlyCheckpointTries = player->m_onFlyCheckpointTries;
    data.m_maybeSpriteRelated = player->m_maybeSpriteRelated;
    data.m_useLandParticles0 = player->m_useLandParticles0;
    data.m_landParticlesAngle = player->m_landParticlesAngle;
    data.m_landParticleRelatedY = player->m_landParticleRelatedY;
    data.m_playerStreak = player->m_playerStreak;
    data.m_streakRelated1 = player->m_streakRelated1;
    data.m_streakRelated2 = player->m_streakRelated2;
    data.m_streakRelated3 = player->m_streakRelated3;
    data.m_slopeRotation = player->m_slopeRotation;
    data.m_currentSlopeYVelocity = player->m_currentSlopeYVelocity;
    data.m_unk3d0 = player->m_unk3d0;
    data.m_blackOrbRelated = player->m_blackOrbRelated;
    data.m_unk3e0 = player->m_unk3e0;
    data.m_unk3e1 = player->m_unk3e1;
    data.m_isAccelerating = player->m_isAccelerating;
    data.m_isCurrentSlopeTop = player->m_isCurrentSlopeTop;
    data.m_collidedTopMinY = player->m_collidedTopMinY;
    data.m_collidedBottomMaxY = player->m_collidedBottomMaxY;
    data.m_collidedLeftMaxX = player->m_collidedLeftMaxX;
    data.m_collidedRightMinX = player->m_collidedRightMinX;
    data.m_streakRelated4 = player->m_streakRelated4;
    data.m_canPlaceCheckpoint = player->m_canPlaceCheckpoint;
    data.m_maybeIsColliding = player->m_maybeIsColliding;
    data.m_jumpBuffered = player->m_jumpBuffered;
    data.m_stateRingJump = player->m_stateRingJump;
    data.m_wasJumpBuffered = player->m_wasJumpBuffered;
    data.m_wasRobotJump = player->m_wasRobotJump;
    data.m_stateJumpBuffered = player->m_stateJumpBuffered;
    data.m_stateRingJump2 = player->m_stateRingJump2;
    data.m_touchedRing = player->m_touchedRing;
    data.m_touchedCustomRing = player->m_touchedCustomRing;
    data.m_touchedGravityPortal = player->m_touchedGravityPortal;
    data.m_maybeTouchedBreakableBlock = player->m_maybeTouchedBreakableBlock;
    data.m_jumpRelatedAC2 = player->m_jumpRelatedAC2;
    data.m_touchedPad = player->m_touchedPad;
    data.m_yVelocity = player->m_yVelocity;
    data.m_fallSpeed = player->m_fallSpeed;
    data.m_isOnSlope = player->m_isOnSlope;
    data.m_wasOnSlope = player->m_wasOnSlope;
    data.m_slopeVelocity = player->m_slopeVelocity;
    data.m_maybeUpsideDownSlope = player->m_maybeUpsideDownSlope;
    data.m_isShip = player->m_isShip;
    data.m_isBird = player->m_isBird;
    data.m_isBall = player->m_isBall;
    data.m_isDart = player->m_isDart;
    data.m_isRobot = player->m_isRobot;
    data.m_isSpider = player->m_isSpider;
    data.m_isUpsideDown = player->m_isUpsideDown;
    data.m_isDead = player->m_isDead;
    data.m_isOnGround = player->m_isOnGround;
    data.m_isGoingLeft = player->m_isGoingLeft;
    data.m_isSideways = player->m_isSideways;
    data.m_isSwing = player->m_isSwing;
    data.m_reverseRelated = player->m_reverseRelated;
    data.m_maybeReverseSpeed = player->m_maybeReverseSpeed;
    data.m_maybeReverseAcceleration = player->m_maybeReverseAcceleration;
    data.m_xVelocityRelated2 = player->m_xVelocityRelated2;
    data.m_isDashing = player->m_isDashing;
    data.m_unk9e8 = player->m_unk9e8;
    data.m_groundObjectMaterial = player->m_groundObjectMaterial;
    data.m_vehicleSize = player->m_vehicleSize;
    data.m_playerSpeed = player->m_playerSpeed;
    data.m_shipRotation = player->m_shipRotation;
    data.m_lastPortalPos = player->m_lastPortalPos;
    data.m_unkUnused3 = player->m_unkUnused3;
    data.m_isOnGround2 = player->m_isOnGround2;
    data.m_lastLandTime = player->m_lastLandTime;
    data.m_platformerVelocityRelated = player->m_platformerVelocityRelated;
    data.m_maybeIsBoosted = player->m_maybeIsBoosted;
    data.m_scaleXRelatedTime = player->m_scaleXRelatedTime;
    data.m_decreaseBoostSlide = player->m_decreaseBoostSlide;
    data.m_unkA29 = player->m_unkA29;
    data.m_isLocked = player->m_isLocked;
    data.m_controlsDisabled = player->m_controlsDisabled;
    data.m_lastGroundedPos = player->m_lastGroundedPos;
    data.m_touchingRings = player->m_touchingRings;
    data.m_lastActivatedPortal = player->m_lastActivatedPortal;
    data.m_hasEverJumped = player->m_hasEverJumped;
    data.m_ringOrStreakRelated = player->m_ringOrStreakRelated;
    data.m_position = player->m_position;
    data.m_isSecondPlayer = player->m_isSecondPlayer;
    data.m_unkA99 = player->m_unkA99;
    data.m_totalTime = player->m_totalTime;
    data.m_isBeingSpawnedByDualPortal = player->m_isBeingSpawnedByDualPortal;
    data.m_unkAAC = player->m_unkAAC;
    data.m_unkAngle1 = player->m_unkAngle1;
    data.m_yVelocityRelated3 = player->m_yVelocityRelated3;
    data.m_gamevar0060 = player->m_gamevar0060;
    data.m_swapColors = player->m_swapColors;
    data.m_gamevar0062 = player->m_gamevar0062;
    data.m_followRelated = player->m_followRelated;
    data.m_unk838 = player->m_unk838;
    data.m_stateOnGround = player->m_stateOnGround;
    data.m_stateUnk = player->m_stateUnk;
    data.m_stateNoStickX = player->m_stateNoStickX;
    data.m_stateNoStickY = player->m_stateNoStickY;
    data.m_stateUnk2 = player->m_stateUnk2;
    data.m_stateBoostX = player->m_stateBoostX;
    data.m_stateBoostY = player->m_stateBoostY;
    data.m_maybeStateForce2 = player->m_maybeStateForce2;
    data.m_stateScale = player->m_stateScale;
    data.m_platformerXVelocity = player->m_platformerXVelocity;
    data.m_leftPressedFirst = player->m_leftPressedFirst;
    data.m_scaleXRelated = player->m_scaleXRelated;
    data.m_maybeHasStopped = player->m_maybeHasStopped;
    data.m_xVelocityRelated = player->m_xVelocityRelated;
    data.m_maybeGoingCorrectSlopeDirection = player->m_maybeGoingCorrectSlopeDirection;
    data.m_isSliding = player->m_isSliding;
    data.m_maybeSlopeForce = player->m_maybeSlopeForce;
    data.m_isOnIce = player->m_isOnIce;
    data.m_physDeltaRelated = player->m_physDeltaRelated;
    data.m_isOnGround4 = player->m_isOnGround4;
    data.m_maybeSlidingTime = player->m_maybeSlidingTime;
    data.m_maybeSlidingStartTime = player->m_maybeSlidingStartTime;
    data.m_changedDirectionsTime = player->m_changedDirectionsTime;
    data.m_slopeEndTime = player->m_slopeEndTime;
    data.m_isMoving = player->m_isMoving;
    data.m_platformerMovingLeft = player->m_platformerMovingLeft;
    data.m_platformerMovingRight = player->m_platformerMovingRight;
    data.m_isSlidingRight = player->m_isSlidingRight;
    data.m_maybeChangedDirectionAngle = player->m_maybeChangedDirectionAngle;
    data.m_unkUnused2 = player->m_unkUnused2;
    data.m_isPlatformer = player->m_isPlatformer;
    data.m_stateNoAutoJump = player->m_stateNoAutoJump;
    data.m_stateDartSlide = player->m_stateDartSlide;
    data.m_stateHitHead = player->m_stateHitHead;
    data.m_stateFlipGravity = player->m_stateFlipGravity;
    data.m_gravityMod = player->m_gravityMod;
    data.m_stateForce = player->m_stateForce;
    data.m_stateForceVector = player->m_stateForceVector;
    data.m_affectedByForces = player->m_affectedByForces;
    data.m_somethingPlayerSpeedTime = player->m_somethingPlayerSpeedTime;
    data.m_playerSpeedAC = player->m_playerSpeedAC;
    data.m_fixRobotJump = player->m_fixRobotJump;
    data.m_inputsLocked = player->m_inputsLocked;
    data.m_gv0123 = player->m_gv0123;
    data.m_iconRequestID = player->m_iconRequestID;
    data.m_unk958 = player->m_unk958;
    data.m_unkUnused = player->m_unkUnused;
    data.m_isOutOfBounds = player->m_isOutOfBounds;
    data.m_fallStartY = player->m_fallStartY;
    data.m_disablePlayerSqueeze = player->m_disablePlayerSqueeze;
    data.m_robotHasRun3 = player->m_robotHasRun3;
    data.m_robotHasRun2 = player->m_robotHasRun2;
    data.m_item20 = player->m_item20;
    data.m_ignoreDamage = player->m_ignoreDamage;
    data.m_enable22Changes = player->m_enable22Changes;
    return data;
}

void PlayerPracticeFixes::applyData(PlayerObject* player, PlayerData data, bool isPlayer2, bool isFakePlayer) {
    if (isPlayer2 && !PlayLayer::get()->m_gameState.m_isDualMode)
        return;

    auto& g = Global::get();
    if (g.addSideHoldingMembers[static_cast<int>(isPlayer2)] && !isFakePlayer) {
        player->m_holdingLeft = data.m_holdingLeft;
        player->m_holdingRight = data.m_holdingRight;
    }

    #ifdef GEODE_IS_WINDOWS

    player->m_rotateObjectsRelated.insert(data.m_rotateObjectsRelated.begin(), data.m_rotateObjectsRelated.end());
    player->m_maybeRotatedObjectsMap.insert(data.m_maybeRotatedObjectsMap.begin(), data.m_maybeRotatedObjectsMap.end());
    player->m_touchedRings.insert(data.m_touchedRings.begin(), data.m_touchedRings.end());
    player->m_ringRelatedSet.insert(data.m_ringRelatedSet.begin(), data.m_ringRelatedSet.end());
    player->m_jumpPadRelated.insert(data.m_jumpPadRelated.begin(), data.m_jumpPadRelated.end());
    player->m_holdingButtons.insert(data.m_holdingButtons.begin(), data.m_holdingButtons.end());

    player->m_playerFollowFloats.clear();

    for (const auto& el : data.m_playerFollowFloats)
        player->m_playerFollowFloats.push_back(el);

    #else

    // player->m_jumpPadRelated = data.m_jumpPadRelated;
    // player->m_holdingButtons = data.m_holdingButtons;

    #endif

    if (!isFakePlayer)
        player->m_mainLayer = data.m_mainLayer;
    
    player->m_wasTeleported = data.m_wasTeleported; 
    player->m_fixGravityBug = data.m_fixGravityBug;
    player->m_reverseSync = data.m_reverseSync;
    player->m_yVelocityBeforeSlope = data.m_yVelocityBeforeSlope;
    player->m_dashX = data.m_dashX;
    player->m_dashY = data.m_dashY;
    player->m_dashAngle = data.m_dashAngle;
    player->m_dashStartTime = data.m_dashStartTime;
    player->m_dashRing = data.m_dashRing;
    player->m_slopeStartTime = data.m_slopeStartTime;
    player->m_justPlacedStreak = data.m_justPlacedStreak;
    player->m_maybeLastGroundObject = data.m_maybeLastGroundObject;
    player->m_collisionLogTop = data.m_collisionLogTop;
    player->m_collisionLogBottom = data.m_collisionLogBottom;
    player->m_collisionLogLeft = data.m_collisionLogLeft;
    player->m_collisionLogRight = data.m_collisionLogRight;
    player->m_lastCollisionBottom = data.m_lastCollisionBottom;
    player->m_lastCollisionTop = data.m_lastCollisionTop;
    player->m_lastCollisionLeft = data.m_lastCollisionLeft;
    player->m_lastCollisionRight = data.m_lastCollisionRight;
    player->m_unk50C = data.m_unk50C;
    player->m_unk510 = data.m_unk510;
    player->m_currentSlope2 = data.m_currentSlope2;
    player->m_preLastGroundObject = data.m_preLastGroundObject;
    player->m_slopeAngle = data.m_slopeAngle;
    player->m_slopeSlidingMaybeRotated = data.m_slopeSlidingMaybeRotated;
    player->m_quickCheckpointMode = data.m_quickCheckpointMode;
    player->m_collidedObject = data.m_collidedObject;
    player->m_lastGroundObject = data.m_lastGroundObject;
    player->m_collidingWithLeft = data.m_collidingWithLeft;
    player->m_collidingWithRight = data.m_collidingWithRight;
    player->m_maybeSavedPlayerFrame = data.m_maybeSavedPlayerFrame;
    player->m_scaleXRelated2 = data.m_scaleXRelated2;
    player->m_groundYVelocity = data.m_groundYVelocity;
    player->m_yVelocityRelated = data.m_yVelocityRelated;
    player->m_scaleXRelated3 = data.m_scaleXRelated3;
    player->m_scaleXRelated4 = data.m_scaleXRelated4;
    player->m_scaleXRelated5 = data.m_scaleXRelated5;
    player->m_isCollidingWithSlope = data.m_isCollidingWithSlope;
    player->m_isBallRotating = data.m_isBallRotating;
    player->m_unk669 = data.m_unk669;
    player->m_currentSlope3 = data.m_currentSlope3;
    player->m_currentSlope = data.m_currentSlope;
    player->unk_584 = data.unk_584;
    player->m_collidingWithSlopeId = data.m_collidingWithSlopeId;
    player->m_slopeFlipGravityRelated = data.m_slopeFlipGravityRelated;
    player->m_particleSystems = data.m_particleSystems;
    player->m_slopeAngleRadians = data.m_slopeAngleRadians;
    player->m_rotationSpeed = data.m_rotationSpeed;
    player->m_rotateSpeed = data.m_rotateSpeed;
    player->m_isRotating = data.m_isRotating;
    
    player->m_isBallRotating2 = data.m_isBallRotating2;
    player->m_speedMultiplier = data.m_speedMultiplier;
    player->m_yStart = data.m_yStart;
    player->m_gravity = data.m_gravity;
    player->m_unk648 = data.m_unk648;
    player->m_gameModeChangedTime = data.m_gameModeChangedTime;
    player->m_padRingRelated = data.m_padRingRelated;
    player->m_maybeReducedEffects = data.m_maybeReducedEffects;
    player->m_maybeIsFalling = data.m_maybeIsFalling;
    player->m_shouldTryPlacingCheckpoint = data.m_shouldTryPlacingCheckpoint;
    player->m_maybeCanRunIntoBlocks = data.m_maybeCanRunIntoBlocks;
    player->m_isOnGround3 = data.m_isOnGround3;
    player->m_checkpointTimeout = data.m_checkpointTimeout;
    player->m_lastCheckpointTime = data.m_lastCheckpointTime;
    player->m_lastJumpTime = data.m_lastJumpTime;
    player->m_lastFlipTime = data.m_lastFlipTime;
    player->m_lastSpiderFlipTime = data.m_lastSpiderFlipTime;
    player->m_unkBool5 = data.m_unkBool5;
    player->m_accelerationOrSpeed = data.m_accelerationOrSpeed;
    player->m_snapDistance = data.m_snapDistance;
    player->m_ringJumpRelated = data.m_ringJumpRelated;
    player->m_objectSnappedTo = data.m_objectSnappedTo;
    player->m_onFlyCheckpointTries = data.m_onFlyCheckpointTries;
    
    player->m_maybeSpriteRelated = data.m_maybeSpriteRelated;
    player->m_useLandParticles0 = data.m_useLandParticles0;
    player->m_landParticlesAngle = data.m_landParticlesAngle;
    player->m_landParticleRelatedY = data.m_landParticleRelatedY;
    player->m_playerStreak = data.m_playerStreak;
    player->m_streakRelated1 = data.m_streakRelated1;
    player->m_streakRelated2 = data.m_streakRelated2;
    player->m_streakRelated3 = data.m_streakRelated3;
    player->m_slopeRotation = data.m_slopeRotation;
    player->m_currentSlopeYVelocity = data.m_currentSlopeYVelocity;
    player->m_unk3d0 = data.m_unk3d0;
    player->m_blackOrbRelated = data.m_blackOrbRelated;
    player->m_unk3e0 = data.m_unk3e0;
    player->m_unk3e1 = data.m_unk3e1;
    player->m_isAccelerating = data.m_isAccelerating;
    player->m_isCurrentSlopeTop = data.m_isCurrentSlopeTop;
    player->m_collidedTopMinY = data.m_collidedTopMinY;
    player->m_collidedBottomMaxY = data.m_collidedBottomMaxY;
    player->m_collidedLeftMaxX = data.m_collidedLeftMaxX;
    player->m_collidedRightMinX = data.m_collidedRightMinX;
    player->m_streakRelated4 = data.m_streakRelated4;
    player->m_canPlaceCheckpoint = data.m_canPlaceCheckpoint;
    player->m_maybeIsColliding = data.m_maybeIsColliding;
    player->m_jumpBuffered = data.m_jumpBuffered;
    player->m_stateRingJump = data.m_stateRingJump;
    player->m_wasJumpBuffered = data.m_wasJumpBuffered;
    player->m_wasRobotJump = data.m_wasRobotJump;
    player->m_stateJumpBuffered = data.m_stateJumpBuffered;
    player->m_stateRingJump2 = data.m_stateRingJump2;
    player->m_touchedRing = data.m_touchedRing;
    player->m_touchedCustomRing = data.m_touchedCustomRing;
    player->m_touchedGravityPortal = data.m_touchedGravityPortal;
    player->m_maybeTouchedBreakableBlock = data.m_maybeTouchedBreakableBlock;
    player->m_jumpRelatedAC2 = data.m_jumpRelatedAC2;
    player->m_touchedPad = data.m_touchedPad;
    player->m_yVelocity = data.m_yVelocity;
    player->m_fallSpeed = data.m_fallSpeed;
    player->m_isOnSlope = data.m_isOnSlope;
    player->m_wasOnSlope = data.m_wasOnSlope;
    player->m_slopeVelocity = data.m_slopeVelocity;
    player->m_maybeUpsideDownSlope = data.m_maybeUpsideDownSlope;
    player->m_isShip = data.m_isShip;
    player->m_isBird = data.m_isBird;
    player->m_isBall = data.m_isBall;
    player->m_isDart = data.m_isDart;
    player->m_isRobot = data.m_isRobot;
    player->m_isSpider = data.m_isSpider;
    player->m_isUpsideDown = data.m_isUpsideDown;
    player->m_isDead = data.m_isDead;
    player->m_isOnGround = data.m_isOnGround;
    player->m_isGoingLeft = data.m_isGoingLeft;
    player->m_isSideways = data.m_isSideways;
    player->m_isSwing = data.m_isSwing;
    player->m_reverseRelated = data.m_reverseRelated;
    player->m_maybeReverseSpeed = data.m_maybeReverseSpeed;
    player->m_maybeReverseAcceleration = data.m_maybeReverseAcceleration;
    player->m_xVelocityRelated2 = data.m_xVelocityRelated2;
    if (!isFakePlayer) player->m_isDashing = data.m_isDashing;
    player->m_unk9e8 = data.m_unk9e8;
    player->m_groundObjectMaterial = data.m_groundObjectMaterial;
    player->m_vehicleSize = data.m_vehicleSize;
    player->m_playerSpeed = data.m_playerSpeed;
    player->m_shipRotation = data.m_shipRotation;
    player->m_lastPortalPos = data.m_lastPortalPos;
    player->m_unkUnused3 = data.m_unkUnused3;
    player->m_isOnGround2 = data.m_isOnGround2;
    player->m_lastLandTime = data.m_lastLandTime;
    player->m_platformerVelocityRelated = data.m_platformerVelocityRelated;
    player->m_maybeIsBoosted = data.m_maybeIsBoosted;
    player->m_scaleXRelatedTime = data.m_scaleXRelatedTime;
    player->m_decreaseBoostSlide = data.m_decreaseBoostSlide;
    player->m_unkA29 = data.m_unkA29;
    player->m_isLocked = data.m_isLocked;
    player->m_controlsDisabled = data.m_controlsDisabled;
    player->m_lastGroundedPos = data.m_lastGroundedPos;
    player->m_touchingRings = data.m_touchingRings;
    player->m_lastActivatedPortal = data.m_lastActivatedPortal;
    player->m_hasEverJumped = data.m_hasEverJumped;
    player->m_ringOrStreakRelated = data.m_ringOrStreakRelated;
    player->m_position = data.m_position;
    player->m_isSecondPlayer = data.m_isSecondPlayer;
    player->m_unkA99 = data.m_unkA99;
    player->m_totalTime = data.m_totalTime;
    player->m_isBeingSpawnedByDualPortal = data.m_isBeingSpawnedByDualPortal;
    player->m_unkAAC = data.m_unkAAC;
    player->m_unkAngle1 = data.m_unkAngle1;
    player->m_yVelocityRelated3 = data.m_yVelocityRelated3;
    player->m_gamevar0060 = data.m_gamevar0060;
    player->m_swapColors = data.m_swapColors;
    player->m_gamevar0062 = data.m_gamevar0062;
    player->m_followRelated = data.m_followRelated;
    player->m_unk838 = data.m_unk838;
    player->m_stateOnGround = data.m_stateOnGround;
    player->m_stateUnk = data.m_stateUnk;
    player->m_stateNoStickX = data.m_stateNoStickX;
    player->m_stateNoStickY = data.m_stateNoStickY;
    player->m_stateUnk2 = data.m_stateUnk2;
    player->m_stateBoostX = data.m_stateBoostX;
    player->m_stateBoostY = data.m_stateBoostY;
    player->m_maybeStateForce2 = data.m_maybeStateForce2;
    player->m_stateScale = data.m_stateScale;
    player->m_platformerXVelocity = data.m_platformerXVelocity;
    player->m_leftPressedFirst = data.m_leftPressedFirst;
    player->m_scaleXRelated = data.m_scaleXRelated;
    player->m_maybeHasStopped = data.m_maybeHasStopped;
    player->m_xVelocityRelated = data.m_xVelocityRelated;
    player->m_maybeGoingCorrectSlopeDirection = data.m_maybeGoingCorrectSlopeDirection;
    player->m_isSliding = data.m_isSliding;
    player->m_maybeSlopeForce = data.m_maybeSlopeForce;
    player->m_isOnIce = data.m_isOnIce;
    player->m_physDeltaRelated = data.m_physDeltaRelated;
    player->m_isOnGround4 = data.m_isOnGround4;
    player->m_maybeSlidingTime = data.m_maybeSlidingTime;
    player->m_maybeSlidingStartTime = data.m_maybeSlidingStartTime;
    player->m_changedDirectionsTime = data.m_changedDirectionsTime;
    player->m_slopeEndTime = data.m_slopeEndTime;
    player->m_isMoving = data.m_isMoving;
    player->m_platformerMovingLeft = data.m_platformerMovingLeft;
    player->m_platformerMovingRight = data.m_platformerMovingRight;
    player->m_isSlidingRight = data.m_isSlidingRight;
    player->m_maybeChangedDirectionAngle = data.m_maybeChangedDirectionAngle;
    player->m_unkUnused2 = data.m_unkUnused2;
    player->m_isPlatformer = data.m_isPlatformer;
    player->m_stateNoAutoJump = data.m_stateNoAutoJump;
    player->m_stateDartSlide = data.m_stateDartSlide;
    player->m_stateHitHead = data.m_stateHitHead;
    player->m_stateFlipGravity = data.m_stateFlipGravity;
    player->m_gravityMod = data.m_gravityMod;
    player->m_stateForce = data.m_stateForce;
    player->m_stateForceVector = data.m_stateForceVector;
    player->m_affectedByForces = data.m_affectedByForces;
    player->m_somethingPlayerSpeedTime = data.m_somethingPlayerSpeedTime;
    player->m_playerSpeedAC = data.m_playerSpeedAC;
    player->m_fixRobotJump = data.m_fixRobotJump;
    player->m_inputsLocked = data.m_inputsLocked;
    player->m_iconRequestID = data.m_iconRequestID;
    player->m_unk958 = data.m_unk958;
    player->m_unkUnused = data.m_unkUnused;
    player->m_isOutOfBounds = data.m_isOutOfBounds;
    player->m_fallStartY = data.m_fallStartY;
    player->m_disablePlayerSqueeze = data.m_disablePlayerSqueeze;
    player->m_robotHasRun3 = data.m_robotHasRun3;
    player->m_robotHasRun2 = data.m_robotHasRun2;
    player->m_item20 = data.m_item20;
    player->m_ignoreDamage = data.m_ignoreDamage;
    player->m_enable22Changes = data.m_enable22Changes;

    player->setPosition(data.position);
    player->setRotation(data.rotation);
}